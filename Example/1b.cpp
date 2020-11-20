#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 


//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << ' ' << *it; 
    cout << '\n'; 
} 

int main(int argc, char const *argv[])
{
	list <int> listA, listB, listC;
	int n, v;

	cout << "Enter n number of list  : " ;
	cin >> n;

	
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter value : ";
		cin >> v;
		listA.push_back(v);
	}

	for (int i = 0; i < n; ++i)
	{
		int k = listA.back();
		listA.pop_back(); 

		if ( k >= 0 ){
			listB.push_back(k);
		} else {
			listC.push_back(k);
		}
	}

	cout << "List positive : ";
	showlist(listB);

	cout << endl << "list negative : ";
	showlist(listC);

	return 0;
}