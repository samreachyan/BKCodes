#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<menuAction.h>
#include<antheader.h>
using namespace std;

template <class T> void inserts (T objects[], int n);
template <class T> void shows (T objects[], int n);
template <class T> void edits (T objects[], int n);
template <class T> void deletes (T objects[], int n);
template <class T> void sorts (T objects[], int n);

const int N =6 ;
int x=0 , y=0 , x1=0 , y1=0 , size, currsize=0;

string menu[N]={
					"1. Insert value",
					"2. Show value",
					"3. Delete value",
					"4. Edit value",
					"5. Sort value",
					"6. Exit program"
				};
				
int main(){
	int indexMenu=0 ; int key;
	const int S=18; 
	string objects[S];
	start:
		system("mode con: cols=90 lines=35");
		setcursor(0,0);
		showMoveMenu(menu, N, 22, 5, 40, 14, 11, 47,31, indexMenu);
		foreColor(0);
		while(true){
			key = getch();
			if (key==27){
				cls(); goto start;
			}
			else if ( key==13 && indexMenu==0){
				cls();
				x=28, y=5;
				DrawRectangle(23,1,40,3,3);
				gotoxy(24,3); 	cout<<"Enter elements you want to input: ";
				setcursor(1,0);
				foreColor(7); gotoxy(58,3);	cin>>size;
				if(size>S){
					foreColor(4); gotoxy(24,10);	cout<<"Out of Range 0->"<<S;
				}
				else{
					currsize = size;
					singleBox(23,5,40,23,3);
					insert (object, currsize);
				}
				foreColor(3); gotoxy(23,31);
				cout<<"Press Esc to exit press Enter to input again...";
			}
			else if (key==13 && indexMenu==1){
				cls();
				x =15, y = 7;
				singleBox(23,3,40,25,3);
				currsize= size;
				gotoxy(25,4); cout<<"Result show single dimensional array";
				foreColor(7); shows(object, currsize);
				foreColor(3); gotoxy(23,31);
				cout<<"Press Esc to exit, Press Enter to refresh";
			}
			else if ( key==13 && indexMenu==2){
				cls(); x=28 , y=5;
				singleBox(15,3,60,20,3);
				foreColor(7); deletes(object, size);
				foreColor(3); gotoxy(20,27);
				cout<<"Press Esc to exit Press Enter to delete again..";				
			}
			else if ( key==13 && indexMenu==3){
				cls(); x=28 , y=5;
				singleBox(15,3,60,20,3);
				foreColor(7); edits(object, size);
				foreColor(3); gotoxy(20,27);
				cout<<"Press Esc to exit Press Enter to edit again..";				
			}
			else if ( key==13 && indexMenu==4){
				cls(); 
				foreColor(7); sorts(object, size);
				foreColor(3); gotoxy(20,27);
				cout<<"Press Esc to exit Press Enter to delete again..";				
			}
			else if ( key==13 && indexMenu==5){
				foreColor(3);
				gotoxy(22, 23); cout<<"Thanks you for using this system";
				gotoxy(22, 25); cout<<"Goodble";
				foreColor(7); gotoxy(22,28); getch(); exit(0);
			}
		}
		
	getch();
}

template <class T> void inserts ( T objects[], int n){
	int count=1;
	for ( int i=0 ; i<n ; i++){
		if (i<10){
			gotoxy(x,y+=2);	cout<<"Enter Value"<<i+1<<"# : ";
			cin>>objects[i];
		}
		else if ( i== count*10){
			gotoxy( x, y+=2);
			cout<<"Enter Value "<<i+1<<" # :"; cin>>objects[i];
			count++;
			x=22, y=5;
			for (int c=0 ; c<25;){
				clsXY(x,y++ , 45);
			}
			x1=28,y1=5;
			singleBox(23,5,40,23,3);
		}
		else{
			gotoxy( x1, y1+=2);
			cout<<"Enter Value "<<i+1<<" # : "; cin>>objects[i];
		}
	}
}

template <class T> void shows ( T objects[], int n){
	int count=1;
	for ( int i=0 ; i<n ; i++){
		if ( i==count*3){
			count++;
			x=26;
			gotoxy(x, y+=4);
			foreColor(2); cout<<objects[i];
		}
		else{
			y-=4;
			gotoxy(x+=11, y+=4);
			foreColor(2);	count<<objects[i];
		}
	}
}

template <class T> void deletes ( T objects[], int n){
	T value;
	int position;
	bool flag=0;
	gotoxy(18,7);	cout<<"Enter value you want to delete";
	cin>>value;
	for (int i=0 ; i<n; i++){
		if (objects[i]==value){
			flag=1;
			position =i;
			size--;
			break;
		}
	}
	if (flag==1){
		for (int i=position ; i<n; i++){
			objects[i]= objects[i+1];
			gotoxy(18,10);
			cout<<"Successfully deleted...";
		}
	}
	else{
		foreColor(4);
		gotoxy(35,15);	cout<<"Invalid value in array";
	}
}

template <class T> void edits ( T objects[], int n){
	
	int index;
	gotoxy(18,7);
	cout<<"Enter index number to edit (rang 0->"<<n-1<<"): ";
	cin>>index;
	if (index>n-1 || index<0){
		foreColor(4);
		gotoxy(35,15); cout<<"Invalid index";
	}
	else{
		gotoxy(18,10);
		cout<<"Enter the new value for index objects["<<index<<"] = ";
		cin>>objects[index];
		foreColor(7); gotoxy(18,13);
		cout<<"Successfully to update";
	}
}

template <class T> void sorts ( T objects[], int n){
	T temp;
	for( int i=0 ; i<n-1 ; i++){
		for(int j=0 ; j<n-1 ; j++){
			if (objects[j]>objects[i]){
				temp=objects[j];
				objects[j]=objects[i];
				objects[i]=temp;
			}
		}
	}
	foreColor(7); gotoxy(28,13); //delay(10); 
	cout<<"Starting sort";
	int count=0;
	animation:
		for(int m=0 ; m<5; m++){
			//delay(200);
			foreColor(3);
			cout<<"."; count++;
		}
		for( int n=0 ; n<3; n++{
			clsrXY(41,13,5);
		if(count<15)
			goto animation;
		foreColor(7); gotoxy(28,13);
		//delay(10);
		 cout<<"Successfully sorted.";
}

