#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
using namespace std;

int N, Q;

void pop_string(char ***save,char **vb, int arr[1000],int M)
{
	for (int i = 0; i < M; i++) {
		int j = 0;
		save[i][j] = strtok(vb[i], ",");
		while (save[i][j] != NULL) {
			j++;
			save[i][j] = strtok(NULL, ",");
		}
		arr[i] = j; //so tu trong van ban
	}
}

inline int calc_f(char* word, char** doc ,int m){
	int count = 0;
	for (int i = 0; i < m; i++) {
		if (strcmp(word, doc[i]) == 0) count++;
	}
	return count;
}

int calc_df(char* word, char*** save, int arr[1000]) {
	int index = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < arr[i]; j++) {
			if (strcmp(word, save[i][j]) == 0) {
				index++;
				break;
			}
		}
	}
	return index;
}

int calc_maxf(char** word, char **doc, int m) {
	int max = 0;
	int k = 0;
	char sv[10];

	for (int i = 0; i < m; i++) {
		if (strcmp(sv, doc[i]) == 0)
			continue;
		k = calc_f(doc[i], doc, m);
		if (k > max) {
			max = k;
			strcpy(sv, doc[i]);
		}
	}
	return max;
}

float score(char** word, char** doc, int m, int n, char ***save, int arr[1000]) {
	float score = 0;
	float maxf = calc_maxf(word, doc, m);
	for (int i = 0; i < n; i++) {
		float f = calc_f(word[i], doc, m);
		if (f == 0)
			continue;
		float df = calc_df(word[i], save, arr);
		if (df == 0) 
			continue;
		score += (0.5 + 0.5 * f / maxf) * log((float)(N) / df) / log(2.0);
	}
	return score;
}

int main() {
	cin >> N;
	char ***saveText;
    char ***saveQuery;
	int numText[1000];// luu so tu trong 1 van ban
	int numQuery[1000];// luu so tu trong 1 truy van
	char** text;
	char** query;

	saveText = new char** [N];
	for (int i = 0; i < N; i++) {
		saveText[i] = new char* [1000];
		for (int j = 0; j < 1000; j++) {
			saveText[i][j] = new char[10];
		}
	}
	text = new char* [N];
	getchar();
	for (int i = 0; i < N; i++) {
		text[i] = new char[11000];
		cin >> text[i];
	}

	cin >> Q;
	getchar();
	saveQuery = new char** [Q];
	for (int i = 0; i < Q; i++) {
		saveQuery[i] = new char* [1000];
		for (int j = 0; j < 1000; j++) {
			saveQuery[i][j] = new char[10];
		}
	}
	query = new char* [Q];
	for (int i = 0; i < Q; i++) {
		query[i] = new char[110];
		cin >> query[i];
	}

	pop_string(saveText, text, numText,N);
	pop_string(saveQuery, query, numQuery,Q);

	for (int i = 0; i < Q; i++) {
		float max = 0;
		float mark = 0;
		int index = 0;

		for (int j = 0; j < N; j++) {
			mark = score(saveQuery[i], saveText[j], numText[j], numQuery[i], saveText, numText);
			if (mark > max) {
				max = mark;
				index = j+1;
			}
		}
		cout << index << endl;
	}
	return 0;
}
