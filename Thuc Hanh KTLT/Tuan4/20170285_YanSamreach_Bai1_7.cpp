#include <iostream>
#include <set>
using namespace std;

template<class T>

set<T> set_union(const set<T>& a, const set<T>& b) {
   set<T> c = a;
   for (int v : b) c.insert(v);
   return c;
}

template<class T>
set<T> set_intersection(const set<T>& a, const set<T>& b) {
   set<T> c;
   for (int v : a) if (b.count(v))
       c.insert(v);
   return c;
}

template<class T>
void print_set(const set<T>& a) {
   for (const T& x : a) {
       cout << x << ' ';
   }
   cout << endl;
}

int main() {
    set<int> a = { 1, 2, 3, 5, 7 };
    set<int> b = { 2, 4, 5, 6, 9 };
    set<int> c = set_union(a, b);
    set<int> d = set_intersection(a, b);

    cout << "Union: "; print_set(c);
    cout << "Intersection: "; print_set(d);

    return 0;
}