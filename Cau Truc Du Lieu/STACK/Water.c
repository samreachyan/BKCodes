/*
    this is my teacher's codes.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct State{
    int x;
    int y;
    struct State* p;// tro den trang thai cha, sinh ra trang thai hien tai
    int indexAction;// description of the action taken
    struct State* next;// tro den phan tu tiep theo trong ds lien ket
}State;

State* head;
State* tail;
State* target;
int a,b,c;
int visited[MAX][MAX]; // visited[x][y] = 1: trang thai (x,y) da duoc xe den

char actions[6][50];


void initQueue(){
    head = NULL; tail = NULL;
}
int queueEmpty(){
    return head == NULL && tail == NULL;
}
int checkTarget(State* s){
    return s->x == c || s->y == c || s->x + s->y == c;
}
void initVisited(){
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
          visited[i][j] = 0;
}

void freeMemory(State* first){
    //if(first == NULL) return;
    while(first != NULL){
      State* p = first;
      first = first->next;
      free(p);
    }
}
void initActions(){
    sprintf(actions[0],"Do nuoc tu vao day coc 1");
    sprintf(actions[1],"Do nuoc tu vao day coc 2");
    sprintf(actions[2],"Do nuoc tu vao coc 1 ra ngoai");
    sprintf(actions[3],"Do nuoc tu vao coc 2 ra ngoai");
    sprintf(actions[4],"Do nuoc tu vao coc 1 sang coc 2");
    sprintf(actions[5],"Do nuoc tu vao coc 2 sang coc 1");
}
State* makeState(int x, int y, State* s){
    State* ns = (State*)malloc(sizeof(State));
    ns->x = x;
    ns->y = y;
    ns->next = NULL;
    ns->p = s;
    return ns;
}
// dua 1 trang thai vao queue
void push(State* s){
    // printf("Push (%d,%d)\n",s->x,s->y);
  if(queueEmpty()){
    head = s; tail = s;
  }else{
    tail->next = s; tail = s;
  }
}
// lay ra trang thai
State* pop(){
  if(queueEmpty()) return NULL;
  State* q = head;
  head = head->next;
  if(head == NULL){
        tail = NULL;
        printf("Queue empty\n");
  }
  return q;
}

int genStateFill1(State* s){
    //tu trang thai hien tai s (s->x, s->y), sinh ra trang thai tiep theo bang cach do day coc 1
    //tra ve 1 neu trang thai sinh ra la trang thai DICH
    // neu trang thai sinh ra chua duoc xet den thi push vao queue
    if(visited[a][s->y]) return 0;
    State* ns = makeState(a,s->y,s);
    ns->indexAction = 0;
    //ns->action = "Do nuoc vao day coc 1";
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;
}
int genStateFill2(State* s){
    //tu trang thai hien tai s (s->x, s->y), sinh ra trang thai tiep theo bang cach do day coc 1
    //tra ve 1 neu trang thai sinh ra la trang thai DICH
    // neu trang thai sinh ra chua duoc xet den thi push vao queue
    if(visited[s->x][b]) return 0;
    State* ns = makeState(s->x,b,s);
    //ns->action = "Do nuoc vao day coc 2";
    ns->indexAction = 1;
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;
}
int genStateEmpty1(State* s){
   if(visited[0][s->y]) return 0;
   State*ns = makeState(0,s->y,s);
   //ns->action = "Do nuoc tu coc 1 ra ngoai";
   ns->indexAction = 2;
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;
}
int genStateEmpty2(State* s){
   if(visited[s->x][0]) return 0;
   State*ns = makeState(s->x,0,s);
   //ns->action = "Do nuoc tu coc 2 ra ngoai";
   ns->indexAction= 3;
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;
}
int genState1To2(State* s){
  if(s->x + s->y > b){
    if(visited[s->x+s->y-b][b]) return 0;
    State*ns = makeState(s->x+s->y - b,b,s);
    //ns->action = "Do nuoc tu coc 1 sang coc 2";
    ns->indexAction = 4;
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;

  }else{
    if(visited[0][s->x + s->y]) return 0;
    State*ns = makeState(0,s->x + s->y,s);
    ns->indexAction = 4;
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;
  }
}
int genState2To1(State* s){
  if(s->x + s->y > a){
    if(visited[a][s->x + s->y - a]) return 0;
    State*ns = makeState(a,s->x+s->y - a,s);
    //ns->action = "Do nuoc tu coc 2 sang coc 1";
    ns->indexAction = 5;
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;

  }else{
    if(visited[s->x + s->y][0]) return 0;
    State*ns = makeState(s->x + s->y,0,s);
    ns->indexAction = 5;
    if(checkTarget(ns)){ target = ns; return 1;}
     push(ns);
    // addStateToList(ns);
     visited[ns->x][ns->y] = 1;
     return 0;
  }
}

void solve(){
    initVisited();
    initQueue();
    State* s0 = makeState(0,0,NULL);

    push(s0);
    target = NULL;
    while(!queueEmpty()){
        State* s = pop();
        // printf("pop (%d,%d)\n",s->x,s->y); // check loop work or not
        if(genStateFill1(s)) break;
        if(genStateFill2(s)) break;
        if(genStateEmpty1(s)) break;
        if(genStateEmpty2(s)) break;
        if(genState1To2(s)) break;
        if(genState2To1(s)) break;
    }
    printf("end of while\n");
    initActions();
    if(target == NULL){
        printf("NOT FOUND\n");
    }else{
        State* s = target;
        while(s != s0){
            printf("(%d,%d): %s\n",s->x,s->y,actions[s->indexAction]);
            s = s->p;
        }
        printf("(%d,%d)\n",s0->x,s0->y); // this is the last answer
    }

    freeMemory(s0);
}

int main(){
    a = 6; b = 8; c = 4;
    solve();
}
