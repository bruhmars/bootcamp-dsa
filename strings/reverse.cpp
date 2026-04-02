#include <iostream>
using namespace std; 

int main() {

    string s; 
    cin >> s; 

    int n = s.length();
    string reversed = ""; 

    for(int i=n-1; i>=0; i--){
        reversed += s[i]; 
    } cout << reversed << endl; 

    return 0; 
}