/* 
	writer : YAN Samreach
	Lecture : Pham Quang Dung
	Subject : Cau Truc Du Lieu
	Year :: 20-04-2019

	Describe : Transfor water of 2 cups with logicial number in the mathematics 
	C code
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000 

typedef struct State {
	int x;
	int y;
	int indexAction;
	struct State * p ; // tro den trang thai sinh ra trong truong hop xuat hien
	struct State * next ; // ket noi to another state in the sturcture
} State;

State * head;
State * tail;
State * target;
int a, b, c;
int visited[MAX][MAX];
char action[6][20];

// create State
State * makeState (int x, int y, State * s){
	State * ns = (State*)malloc(sizeof(State));
	ns->x = x;
	ns->y = y;
	ns->next = NULL;
	ns->p = s;
	return ns;
}

void initAction(){
	sprintf(action[0], "Fill water into 1");
	sprintf(action[1], "Fill water into 2");
	sprintf(action[2], "Make empty 1");
	sprintf(action[3], "Make empty 2");
	sprintf(action[4], "Take from 1 to 2");
	sprintf(action[5], "Take from 2 to 1");
}

void initQueue(){
	head = NULL;
	tail = NULL;
}
// check if there is nothing in the state
int QueueEmpty(){
	return head == NULL && tail == NULL;
}

void Initvisited(){ // this function not work yet
	for (int i = 0; i < MAX; ++i)
		for (int j = 0; j < MAX; ++j)
			visited[i][j] = 0;
}

void markVisit(State * s){
	visited[s->x][s->y] = 1;
}
int checkTarget (State *s ){
	return s->x == c || s->y == c || s->x + s->y == c ;
}

// add value into state  
void push (State *s ){
	if (QueueEmpty()){
		head = s;
		tail = s;
	} else {
		tail->next = s;
		tail = s;
	}
}

// viet chua xong
State * pop () {
	if (QueueEmpty()) return NULL;

	State * q = head;
	head = head->next;

	if (head == NULL){
		tail = NULL;
		printf("Queue is empty.\n");
	}
	return q;
}


int genStateFill1 (State * s){
	// tu trang thai s sang trang thai tiep theo bang coc 1
	// tra ve 1 neu trang thai sinh ra la trang thai DICK 
	// neu trang thai sinh ra chua de xuat hien

	if (visited[a][s->y]) return 0;
	State * ns = makeState(a, s->y, s);
	ns->indexAction = 0;
	if (checkTarget(ns)) {
		target = ns;
		return 1;
	}
	push(ns);
	visited[ns->x][ns->y] = 1 ;
	return 0;
}
int genStateFill2 (State * s){
	if (visited[s->x][b]) return 0;
	State * ns = makeState(s->x, b, s);
	ns->indexAction = 1;
	if (checkTarget(ns)) {
		target = ns;
		return 1;
	}
	push(ns);
	visited[ns->x][ns->y] = 1;
	return 0;
}
int genStateEmpty1(State *s ){
	if (visited[0][s->y]) return 0;
	State * ns = makeState(0, s->y, s);
	ns->indexAction = 2;
	if (checkTarget(ns)) {target = ns; return 1;}
	push(ns);
	visited[ns->x][ns->y] = 1;
	return 0;
}
int genStateEmpty2(State * s){
	if (visited[s->x][0]) return 0;
	State * ns = makeState(s->x, 0, s);
	ns->indexAction = 3;
	if (checkTarget(ns)) {target = ns; return 1;}
	push(ns);
	visited[ns->x][ns->y] = 1;
	return 0;
}
int genState1To2 (State * s){
	if (s->x + s->y > b) {
		if (visited[s->x + s->y - b][b]) return 0;
		State * ns = makeState(s->x + s->y - b, b, s);
		ns->indexAction = 4;
		if (checkTarget(ns)) {
			target = ns;
			return 1;
		}
		push(ns);
		visited[ns->x][ns->y] = 1;
		return 0;
	} else {
		if (visited[0][s->x + s->y]) return 0;
		State * ns = makeState(0,s->x + s->y , s);
		ns->indexAction = 4;
		if (checkTarget(ns)) {
			target = ns;
			return 1;
		}
		push(ns);
		visited[ns->x][ns->y] = 1;
		return 0;
	}
}

int genState2To1 ( State * s){
	if (s->x + s->y > a) {
		if (visited[a][s->x + s->y -a ]) return 0;
		State * ns = makeState(a, s->x + s->y - a, s);
		ns->indexAction = 5;
		if ( checkTarget(ns)) {
			target = ns;
			return 1;
		}
		push(ns);
		visited[ns->x][ns->y] = 1;
		return 0;
	} else {
		if (visited[s->x + s->y][0]) return 0;
		State * ns = makeState( s->x + s->y , 0, s);
		ns->indexAction = 5;
		if ( checkTarget(ns)) {
			target = ns;
			return 1;
		}
		push(ns);
		visited[ns->x][ns->y] = 1;
		return 0;
	}
}

void solve(){

	Initvisited();
	initQueue();
	State * s0 = makeState(0, 0, NULL);
	push(s0);
	markVisit(s0);
	target = NULL;
	while(!QueueEmpty() ) {
	    State * s = pop();
	    if (genStateFill1(s)) break;
	    if (genStateFill2(s)) break;
	    if (genStateEmpty1(s)) break;
	    if (genStateEmpty2(s)) break;
	    if (genState1To2(s)) break;
	    if (genState2To1(s)) break;
	}
	printf("end of the while in solve() function\n");

	initAction();
	if (target == NULL)
		printf("\n\nNULL no state. NO answer!!!\n");
	else {
		State *s = target;
		while( s != s0) {
		    printf("(%d , %d) : %s\n", s->x, s->y , action[s->indexAction]);
		    s = s->p;
		}
	    printf("(%d , %d) \n", s0->x, s0->y );

	}
}


int main(int argc, char const *argv[])
{
	a = 6;
	b = 8;
	c = 4;
	solve();

	return 0;
}