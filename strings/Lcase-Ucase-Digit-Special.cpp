#include <iostream>
using namespace std; 

int main(){

    char ch; 
    cin >> ch; 

    if(ch >= 'A' and ch <= 'Z'){
        cout << "Uppercase" << endl;
    } else if (ch >= 'a' and ch <= 'z') {
        cout << "Lowercase" << endl; 
    } else if (ch >= '0' and ch <= '9'){
        cout << "Digit" << endl;
    } else {
        cout << "Special"; 
    }
    return 0; 
}