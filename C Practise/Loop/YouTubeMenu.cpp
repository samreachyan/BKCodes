#include<iostream>
#include<antheader.h>
using namespace std;

int main()
{
	string menu[5]={"Start New","Infomation", "Contact Me", "Option" ,"Exit Program"};
	int pointer = 0;
	setcursor(0,0);
	while(1){
		system("cls");
		foreColor(15);
		cout<<"Main Menu\n\n";
		for ( int i=0 ; i<5 ; i++){
			if ( i== pointer)
			{
				foreColor(11);
				cout<<menu[i]<<endl;
			}
			else{
				foreColor(15);
				cout<<menu[i]<<endl;
			}
		}
		while (1){
			char ch;
			ch=getch();
			if ( ch==72){ //up
				pointer -= 1;
				if ( pointer == -1){
					pointer =4;
				}
				break;
			}
			else if ( ch==80 ){ //down
				pointer +=1;
				if (pointer == 5){
					pointer =0 ;
				}
				break;
			}
			
			else if ( ch==13){ // key enter
				switch (pointer)
				{
					case 0:
						system("Login.exe");
						system("pause");
						break;
					case 1:
					case 2:
					case 3:
						gotoxy(3,10);
						cout<<"Starting .......  ";
						
						for (int i=3 ; i>=0; i-- )
						{
							delay(1000);
							gotoxy(20,10);
							cout<<i;
						}
						break;
					case 4:
						
						exit(1);
						break;
				}
				break;
			}
		}
	}

}
