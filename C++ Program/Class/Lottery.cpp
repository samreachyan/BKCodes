#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void lottery ( int total, int balls){
	if ( total < balls)
		return ;
	srand(time(NULL));
	int * ballNew = new int [balls];
	
	for (int i=0 ; i<balls ; i++){
		ballNew[i] = rand() % balls +1;
		for (int j=0 ; j<i+1 ; j++)
		{
			if (ballNew[i]==ballNew[j] && i !=j ){
				i--;
				break;
			}
			else if ( j==i){
				cout<<ballNew[i]<<endl;
			}
		}
		
		//cout<<ballNew[i]<<endl;
	}
	
	delete []ballNew;

}

int main(){
//	srand(time(NULL));
//	int nr = rand() % 49 +1 ;
//	cout<<nr<<endl;

	lottery(49 , 6);
	system("pause");
}
