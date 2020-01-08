#include <iostream> 
#include <list> 
using namespace std; 

list <int> listA;
int n, val;

bool check(list<int> g) {
	int k;
	for (int i = 0; i < n/2; ++i)
	{
		int n1,n2;
		n1 = listA.back();
		listA.pop_back();
		n2 = listA.front();
		listA.pop_front();

		if ( n1 == n2 ) {
			k = 1;
		} else {
			k = 0;
			break;
		}
	}

	if ( k == 1 ) 
		return true;
	else 
		return false;

}

int main()
{
	cout << "Enter n list number : " ;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter value : ";
		cin >> val;
		listA.push_back(val);
	}

	if (check(listA)) {
		cout << "It is symmetry number ";
	} else {
		cout << "It is not symmetry number";
	}

    return 0;
}