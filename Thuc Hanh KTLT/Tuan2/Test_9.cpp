#include <iostream> 
#include<limits>

using namespace std; 
int main() { 
    float fl;
    while((std::cin >> fl)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
      
    cout << "\nTotal number of inputs entered: " ;
    return 0; 
} 