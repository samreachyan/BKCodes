#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//C++ code to define list element

typedef struct ListNode{
int data; // the element data
struct ListNode *next; // next link
}ListElem;
//pfirst and plast pointers
ListElem *pfirst;
ListElem *plast;

//C++ code to count the number of items in the list
int countitem(ListElem *L)
{
  ListElem *i;
  int t;
  i=L;
  if(L!=NULL){
     t=1;
     i=i->next;
    while(i!=L){ //not the end of the list
        t=t+1;
        i=i->next;

  }
    return t;
}

   else return 0;

}

//C++ code to  delete an item of the circularly linked list
void Delete(int pos){
  int i,val_pos=1;
  if(pfirst!=NULL){ //make sure the Circularly Linked List is not empty.
      ListElem *temp,*del;

  if(pos==1){//delete the first item
    if(countitem(pfirst)==1){ //The Circularly Linked List contains only one item
       pfirst=NULL;
       plast=NULL;

}
   else{ //The Circularly Linked List contains more than one item
      temp=pfirst;
      pfirst=pfirst->next; 
      temp=NULL;
  }

}

  else if(pos>1 && pos<=countitem(pfirst)){//delete middle item
     temp=pfirst;
    for(i=1;i<pos-1;i=i+1){temp=temp->next;} //move to the item staying before the target item to be deleted
    del=temp->next; //target item to be deleted
    temp->next=del->next;
    if(del->data==plast->data)plast=temp; //delete last item
    del=NULL;

}


  else {val_pos=0;cout<<"Invalid position!\n";}

  if(val_pos!=0 && plast!=NULL) plast->next=pfirst; //let the plast points to the pfirst to make the list circularly linked

}

else cout<<"No item found\n";

}

//Find min item

ListElem *findmin(ListElem *L){
  ListElem *min,*tr;
  min=L;

  if(L!=NULL){
    tr=L->next;
    while(tr!=pfirst){ 
        if(tr->data<min->data) min=tr;
        tr=tr->next; 
   }
  return min;
}
else return NULL;//empty list

}



//Find max item
ListElem *findmax(ListElem *L){
  ListElem *max,*tr;
  max=L;

  if(L!=NULL){
    tr=L->next;
    while(tr!=pfirst){ 
         if(tr->data>max->data) max=tr;
         tr=tr->next; 
       }
   return max;
  }
  else return NULL;//empty list

}

//Searching for an item in the circularly linked list

ListElem *find(ListElem *L,int val){

  ListElem *tr;
  int f=0;
  if(L!=NULL){

     if(L->data==val) return L;//The target item is the first item 
    else{ //search the next item
         tr=L->next;
         while(tr!=L){
              if(tr->data==val) {f=1;break;} //found the tartget=>stop searching
              else tr=tr->next;//otherwise continue searching
         }
}

  if(f!=0) return tr; //return found item
  else return NULL;//otherwise return NULL
}
  else return NULL; //empty list
}

//Print all items of the Circularly Linked List
void printall(ListElem *L)
{

  ListElem *i;
  i=L;

  if(L!=NULL){
     cout<<i->data<<"\n";//show the first item
     i=i->next; //The element stays immediately next to the pfirts 
     while(i!=L){
         cout<<i->data<<"\n";
         i=i->next;
      }
  }
else cout<<"This is no item.\n";

}
void showmenu(){

  cout<<"=================================\n";
  cout<<"Circularly Linked List Operations Menu\n";
  cout<<"=================================\n";
  cout<<"1.Add a new item\n";
  cout<<"2.Delete an item\n";
  cout<<"3.Show number of items\n";
  cout<<"4.Find min item\n";
  cout<<"5.Find max item\n";
  cout<<"6.Find item\n";
  cout<<"7.Print all items\n";
  cout<<"8.Exit\n";


}

void select(){
  int val, pos, ch;
  ListElem *temp;
  char yes='y';
  makeEmpty();//Make the list empty
  while(yes=='y'){
     cout<<"Enter your choice:";cin>>ch;
     switch(ch){
     case 1:
        cout<<"Value:";cin>>val;
        cout<<"Position:";cin>>pos;
        Insert(val,pos);
        break;
    case 2:
        cout<<"Position:";cin>>pos;
        Delete(pos);
        break;
    case 3:
        cout<<"Number of items:"<<countitem(pfirst);
        break;
    case 4:
        temp=findmin(pfirst);
        if(temp!=NULL)
            cout<<"The min item:"<<temp->data<<endl;
       else cout<<"Not found\n";
       break;
    case 5:
       temp=findmax(pfirst);
       if(temp!=NULL)
          cout<<"The max item:"<<temp->data<<endl;
      else cout<<"Not found\n";

      break;
    case 6:
       cout<<"Find what:";cin>>val;
       temp=find(pfirst,val);
       if(temp!=NULL)
           cout<<"The found item:"<<temp->data<<endl;
       else cout<<"Not found\n";
       break;
     case 7:
        cout<<"All items:\n";
        printall(pfirst);
        break;
     case 8: exit(0);

     default: cout<<"Invalid choice\n";

       }
    cout<<"Continue?y/n:";cin>>yes; 
    }

}

typedef struct ListNode{

int data;
// the element data

struct ListNode *next;
// next link }ListElem;
//---------------------------------------------------------

void Insert (int,int);
void Delete(int);
//delete item from the Circularly Linked

List void printall(ListElem *L);
//print out all items on the screen

int countitem(ListElem *L);
//return the number of items in the Circularly Linked

List ListElem *findmin(ListElem *L);
//find the min element of the list

ListElem *findmax(ListElem *L);
//find the min element of the list

ListElem *find(ListElem *L,int);
//find the min element of the list

ListElem *pfirst;
//pfirst points to the first item of the list

ListElem *plast;
//plast points to the last item of the list

//insert item

void Insert (int val,int pos) {

int t,val_pos=1;
ListElem *item;
//new element to be inserted

item=(ListElem *)malloc(sizeof(ListElem));
//allocate space

if(!item) {cout<<"Memory problem..."< exit(100);
}
item->data=val;
//insert a new item to the empty Circularly Linked List

if(pfirst==NULL && plast==NULL){ //The first and last item point to the new item when they are null--empty Circularly Linked List.

pfirst=item;
plast=item;
cout<<"Inserted:"<data<<"\n";
}
//insert a new item at the beginning of the Circularly Linked List

else if(pos==1) { item->next=pfirst;
pfirst=item;
}
//insert a new item between items

else if(pos>1 && pos<=countitem(pfirst)){ ListElem *ta;
ta=pfirst;
for(t=1;
tt=t+1){ta=ta->next;
}
//move to the insertion point

item->next=ta->next;
ta->next=item;
}
//insert a new item at the end of the Circularly Linked List

else if(pos==countitem(pfirst)+1){

plast->next=item;
plast=item;
cout<<"Inserted: "<data<<"\n";
}
//show message if position is not valid.

else { val_pos=0;
cout<<"Invalid position! Position must be between 1 and "<<countitem(pfirst)+2<<"\n";
}
if(val_pos!=0 && plast!=NULL) plast->next=pfirst;
// let the plast points to the pfirst to make the list curcularly linked }
//Print out all items on the screen

void printall(ListElem *L) {

ListElem *i;
i=L;
if(L!=NULL){

cout<data<<"\n";
//show the first item

i=i->next;
//The element stays immediately next to the pfirts

while(i!=L){ cout<data<<"\n";
i=i->next;
}
}
else cout<<"This is no item.\n";
}
//count the number of items in the Circularly Linked List

int countitem(ListElem *L) {

ListElem *i;
int t;
i=L;
if(L!=NULL){ t=1;
i=i->next;
while(i->data!=L->data){ t=t+1;
i=i->next;
}
return t;
}
else return 0;
}
//delete item

void Delete(int pos){

int i,val_pos=1;
if(pfirst!=NULL){ //make sure the Circularly Linked List is not empty.

ListElem *temp,*del;
if(pos==1){//delete the first item

if(countitem(pfirst)==1){ //The Circularly Linked List contains only one item

pfirst=NULL;
plast=NULL;
}
else{ //The Circularly Linked List contains more than one item

temp=pfirst;
pfirst=pfirst->next;
temp=NULL;
}
}
else if(pos>1 && pos<=countitem(pfirst)){//delete middle item

temp=pfirst;
for(i=1;
ii=i+1){temp=temp->next;
}
//move to the item staying before the target item to be deleted

del=temp->next;
//target item to be deleted

temp->next=del->next;
if(del->data==plast->data)plast=temp;
//delete last item

del=NULL;
}
else {val_pos=0;
cout<<"Invalid position!\n";
}
if(val_pos!=0 && plast!=NULL) plast->next=pfirst;
//let the plast points to the pfirst to make the list curcularly linked

}
else cout<<"No item found\n";
}
ListElem *findmin(ListElem *L){

ListElem *min,*tr;
min=L;
if(L!=NULL){

tr=L->next;
while(tr!=pfirst){

if(tr->datadata) min=tr;
tr=tr->next;
}
return min;
}
else return NULL;
//empty list

}
ListElem *findmax(ListElem *L){

ListElem *max,*tr;
max=L;
if(L!=NULL){ tr=L->next;
while(tr!=pfirst){	if(tr->data>max->data) max=tr;
tr=tr->next;
}
return max;
}
else return NULL;
//empty list

}
ListElem *find(ListElem *L,int val){

ListElem *tr;
int f=0;
if(L!=NULL){

if(L->data==val) return L;
//The target item is the first item

else{ //search the next item

tr=L->next;
while(tr!=L){

if(tr->data==val) {

f=1;
break;
}
//found the tartget=>stop searching

else tr=tr->next;
//otherwise continue searching

}
}
if(f!=0) return tr;
//return found item

else return NULL;
//otherwise return NULL

}
else return NULL;
//empty list

 }
void makeEmpty(){

pfirst=plast=NULL;
}
void showmenu(){ cout<<"=================================\n";
cout<<"Circularly Linked List Operations Menu\n";
cout<<"=================================\n";
cout<<"1.Add a new item\n";
cout<<"2.Delete an item\n";
cout<<"3.Show number of items\n";
cout<<"4.Find min item\n";
cout<<"5.Find max item\n";
cout<<"6.Find item\n";
cout<<"7.Print all items\n";
cout<<"8.Exit\n";
}
void select(){

 int val, pos, ch;
ListElem *temp;
char yes='y';
makeEmpty();
//Make the list empty

while(yes=='y'){ cout<<"Enter your choice:";
cin>>ch;
switch(ch){

case 1: cout<<"Value:";
cin>>val;
cout<<"Position:";
cin>>pos;
Insert(val,pos);
break;
case 2: cout<<"Position:";
cin>>pos;
Delete(pos);
break;
case 3: cout<<"Number of items:"< break;
case 4: temp=findmin(pfirst);
if(temp!=NULL) cout<<"The min item:"<data<<endl;
else cout<<"Not found\n";
break;
case 5: temp=findmax(pfirst);
if(temp!=NULL) cout<<"The max item:"<data<<endl;
else cout<<"Not found\n";
break;
case 6: cout<<"Find what:";
cin>>val;
temp=find(pfirst,val);
if(temp!=NULL) cout<<"The found item:"<data<<endl;
else cout<<"Not found\n";
break;
case 7: cout<<"All items:\n";
printall(pfirst);
break;
case 8: exit(0);
default: cout<<"Invalid choice\n";
}
cout<<"Continue?y/n:";
cin>>yes;
}
}
int main(){

showmenu();
select();
getch();
return 0;
}
