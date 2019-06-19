/*
	writer : YAN Samreach
	Lecture : Pham Quang Dung
	Subject : Cau Truc Du Lieu
	Year :: 20-04-2019

	Describe : Transfor water of 2 cups with logicial number in the mathematics 
	C++ code
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <queue>
#include <stack>
#include <list>
using namespace std;

#define MAX 1000 

struct State {
	int x;
	int y;
	int index;

	State * p; // pointer to the  state generating currrnt state 
} ;

bool visited[MAX][MAX];
int a, b, c;
char action[6][50];
queue<State*> Q;
list<State*> L;
State * target;

void initVisited () {
	for (int x = 0; x < MAX; ++x)
		for (int y = 0; y < MAX; ++y)
			visited[x][y] = false ;
}

bool reachTarget(State * s){
	return (s->x == c || s->y == c || s->x + s->y == c);
}

void markVisit(State * s){
	visited[s->x][s->y] = true ;
}

void initAction(){
	sprintf(action[0], "Fill water into 1");
	sprintf(action[1], "Fill water into 2");
	sprintf(action[2], "Make empty 1");
	sprintf(action[3], "Make empty 2");
	sprintf(action[4], "Take from 1 to 2");
	sprintf(action[5], "Take from 2 to 1");
}

// void freeMemory () {
// 	list<State*>::iterate it;
// 	for (int it = L.begin() ; it != L.end() ; ++it)
// 	{
// 		delete * it ;
// 	}
// }

bool genMove1Out(State * s){
	if (visited[0][s->y]) return false;
	State * ns = new State;
	ns->x = 0 ;
	ns->y = s->y;
	// ns->msg ="Do het nuoc coc 1 ra ngoai";
	ns->p = s ;
	ns->index = 2;
	Q.push(ns) ;
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)){
		target = ns;
		return true ;
	}
	return false ;
}

bool genMove2Out(State * s){
	if (visited[s->x][0]) return false;
	State * ns = new State;
	ns->x = s->x ;
	ns->y = 0;
	// ns->msg = "Do het nuoc coc 1 ra ngoai" ;
	ns->index = 3;
	ns->p = s ;
	Q.push(ns) ;
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)){
		target = ns;
		return true ;
	}
	return false ;
}

bool genMove1Fill2 (State * s){
	if (s->x + s->y < b) return false ;
	if (visited[s->x + s->y - b][b]) return false ;
	State * ns = new State;
	ns->x = s->x + s->y -b;
	ns->y = b;
	ns->p = s;
	ns->index = 4;
	Q.push(ns);
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)){
		target = ns;
		return true;
	}
	return false;
}

bool genMove2Fill1 (State * s){
	if (s->x + s->y < a) return false ;
	if (visited[a][s->x + s->y - a]) return false ;
	State * ns = new State;
	ns->x = a;
	ns->y = s->x + s->y - a;
	ns->p = s;
	ns->index = 5;
	Q.push(ns);
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)){
		target = ns;
		return true;
	}
	return false;
}

bool genMoveAll12(State *s){
	if (s->x + s->y > b) return false;
	if (visited[0][s->x + s->y]) return false;
	State *ns = new State;
	ns->x = 0;
	ns->y = s->x + s->y ;
	ns->p = s;
	ns->index = 4;
	Q.push(ns);
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)){
		target = ns;
		return true;
	}
	return false;
}

bool genMoveAll21(State *s){
	if (s->x + s->y > a) return false;
	if (visited[s->x + s->y][0]) return false;
	State *ns = new State;
	ns->x = s->x + s->y ;
	ns->y = 0;
	ns->p = s;
	ns->index = 5;
	Q.push(ns);
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)){
		target = ns;
		return true;
	}
	return false;
}

bool genMoveFill1(State *s ){
	if (visited[a][s->y]) return false;
	State * ns = new State;
	ns->x = a;
	ns->y = s->y;
	ns->p = s;
	ns->index = 1;
	Q.push(ns);
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)) {
		target = ns;
		return true;
	}
	return false;
}

bool genMoveFill2(State *s ){
	if (visited[s->x][b]) return false;
	State * ns = new State;
	ns->x = s->x;
	ns->y = b;
	ns->p = s;
	ns->index = 2;
	Q.push(ns);
	markVisit(ns);
	L.push_back(ns);
	if (reachTarget(ns)) {
		target = ns;
		return true;
	}
	return false;
}

void solve () {
	initVisited();
	State *s = new State;
	s->x = 0 ;
	s->y = 0;
	s->p = NULL;
	Q.push(s);
	markVisit(s);
	target = NULL;

	while(!Q.empty()) {
	    State *s = Q.front() ;
	    Q.pop();
	    if (genMove1Out(s)) break;
	    if (genMove2Out(s)) break;
	    if (genMoveFill1(s)) break;
	    if (genMoveFill2(s)) break;
	    if (genMove1Fill2(s)) break;
	    if (genMove2Fill1(s)) break;
	    if (genMoveAll12(s)) break;
	    if (genMoveAll21(s)) break;

	}	

	initAction();
	if (target == NULL)
		printf("\n\nNULL no state. NO answer!!!\n");
	else {
		State *ns = target;
		while( ns != s) {
		    printf("(%d , %d) : %s\n", ns->x, ns->y , action[ns->index]);
		    ns = ns->p;
		}
	    printf("(%d , %d) \n", s->x, s->y );

	}
}

void print(State* target){
	printf("----------------- Result ----------------\n");
	if (target == NULL )	
		printf("Khong co loi giai\n");

	State * current = target ;
	stack<State*> action;
	while(current != NULL) {
	    action.push(current);
	    current = current->p;
	}

	while(action.size() > 0 ) {
	    current = action.top();
	    action.pop();

	    printf("(%d , %d) : %s\n", current->x, current->y , current->msg);
	}
}

int main(int argc, char const *argv[])
{
	a = 6;
	b = 8;
	c = 4;

	target = NULL;
	solve();
	//print(target);
	return 0;
}