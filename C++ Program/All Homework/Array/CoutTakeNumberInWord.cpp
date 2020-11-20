#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	string word, st;
	fflush(stdin); 
	getline(cin,word); //he12llo3welco4m5e
	int i, n=0;
	for (i=0 ; word[i]!='\0' ; i++)
	{
		if( word[i]==48 || word[i]==49 || word[i]==50 || word[i]==51 || word[i]==52 || word[i]==53 || word[i]==54 || word[i]==55 || word[i]==56 || word[i]==57 )
		{
			st= st + word[i] + " "; n++;
		}
	}
	cout<<"So there are : "<<st<<" and "<<n<<" numbers.";
}
