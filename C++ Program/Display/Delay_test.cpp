#include <windows.h>
#include <iostream>
using namespace std;

int main( ){
    cout << "5" << endl;
    //  We use 1000 since Sleep takes the amount of time in milliseconds, and 1000 ms = 1 second
    Sleep( 1000 );

    cout << "4" << endl;
    Sleep( 1000 );
    cout << "3" << endl;
    Sleep( 1000 );
    cout << "2" << endl;
    Sleep( 1000 );
    cout << "1" << endl;
    Sleep( 1000 );

    cout << "Congratulations, you've just wasted 5 seconds of your life!";
    cin.get( );
    
    return 0;
}

