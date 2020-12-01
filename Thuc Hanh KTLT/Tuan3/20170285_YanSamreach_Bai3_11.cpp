#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define LIMIT 1e8

int n, r;
int x[MAX], c[MAX][MAX], value[MAX];
bool mark[MAX];
int result, result_best;
int res[MAX];

void init() {
    result = 0;
    result_best = LIMIT;
    memset(mark, true, sizeof(mark));
    memset(x, 0, sizeof(x));
}

void process(int i, int m) {
    for (int v = 2; v < m; v++) {
        int value_current = value[v];
        if (mark[value_current] == true) {
            mark[value_current] = false;
            x[i] = value_current;
            result += c[x[i - 1]][value_current];
            if (i == m - 1) {
                result += c[value_current][x[m]];
                if (result < result_best) result_best = result;
                result -= c[value_current][x[m]];
            }
            else process(i + 1, m);
            mark[value_current] = true;
            result -= c[x[i - 1]][value_current];
        }
    }
}

void run() {
    cin >> n >> r;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
            if (i != j && c[i][j] == 0) c[i][j] = LIMIT;
        }
    cin.ignore();
    for (int i = 0; i < r; i++) {
        string s;
        getline(cin, s);

        stringstream stm(s);
        stringstream ss;
        string token;

        while (getline(stm, token, ' ')) {
            ss << token;
            ss << endl;
        }

        int m = 0;
        while (!ss.eof()) {
            m++;
            ss >> value[m];
        }
        m--;

        init();
        x[1] = value[1];
        x[m] = value[m];
        mark[value[1]] = false;
        mark[value[m]] = false;
        if (m == 2) result_best = c[x[1]][x[2]];
        else process(2, m);
        if (result_best >= LIMIT) result_best = 0;
        res[i] = result_best;
    }
}

int main() {
    run();
    for (int i = 0; i < r; i++) cout << res[i] << endl;
}