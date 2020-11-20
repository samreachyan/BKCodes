#include <bits/stdc++.h>
using namespace std;
#define N 4

struct Node {
	Node * parent;
	int f;
	int lowerbound;
	int workerID;
	int jobID;
	bool assigned[N];
};

Node * newNode(int worker, int job, bool assigned[], Node * parent){
	Node * node = new Node;
	for (int j=0; j<N; j++) node->assigned[j] = assigned[j];
	node->assigned[job] = true;
	
	node->parent = parent;
	node->workerID = worker;
	node->jobID = job;
	
	return node;
}

int calculateLowerbound (int costMatrix[N][N], int worker, int job, bool assigned[]) {
	int lowerbound = 0;
	bool avaiable[N] = {true};
	
	for (int i = worker + 1; i<N ; i++) {
		int min = INT_MAX, minIndex = -1;
		for (int j = 0; j<N ; j++) {
			if ( !assigned[j] && avaiable[j] && costMatrix[i][j] < min){
				minIndex = j;
				min = costMatrix[i][j];
			}
		}
		lowerbound += min;
		avaiable[minIndex] = false;
	}
	return lowerbound;
}

struct comp {
	bool operator ()(const Node * lhs, const Node* rhs) const {
		return lhs->lowerbound > rhs->lowerbound;
	}
};

void printSolution (Node *min) {
	if (min->parent == NULL ) return ;
	
	printSolution(min->parent);
	cout << "Gan cong nhan " << char(min->workerID + 'A') 
		 << " thuc hien cong viec " << min->jobID << endl;
}

int BranchAndBound (int costMatrix[N][N]) {
	priority_queue<Node*, std::vector<Node*>, comp> pq;
	
	bool assigned[N] = {false};
	Node * root = newNode (-1, -1, assigned, NULL);
	root->f = root->lowerbound = 0;
	root->workerID = -1;
	
	pq.push(root);
	
	while (!pq.empty()){
		Node * min = pq.top();
		pq.pop();
		int i = min->workerID + 1;
		
		if ( i == N){
			printSolution(min);
			return min->lowerbound;
		}
		
		for (int j = 0; j<N ; j++){
			if (!min->assigned[j]) {
				Node * child = newNode(i, j, min->assigned, min);
				child->f = min->f + costMatrix[i][j];
				
				child->lowerbound = child->f + calculateLowerbound(costMatrix, i, j, child->assigned);
				
				pq.push(child);
			}
		}
	}
}

int main(){
	int costMatrix[N][N] = {
		{9, 2, 7, 8},
		{6, 4, 3, 7},
		{5, 8, 1, 8},
		{7, 6, 9, 4}
	};
	
	cout << "\nChi phi toi uu = " << BranchAndBound(costMatrix);
	return 0;
}
