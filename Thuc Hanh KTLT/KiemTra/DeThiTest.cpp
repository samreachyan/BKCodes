#include <bits/stdc++.h>
using namespace std;

struct HocSinh {
    char * name;
    float gpa;
};

// find error in main runtime 
void changeName(HocSinh &b) {
    if (b.name[0] >= 'A' && b.name[0] <= 'Z') {
        b.name[0] = b.name[0] - ('A'-'a');
    }
}

int main() {
    char *c = "Yan Samreach";
    struct HocSinh hs;
    hs.name = c;
    changeName(hs);

    cout << hs.name << endl;
}