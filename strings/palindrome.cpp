#include <iostream>
using namespace std; 

int main() {

    string s; 
    cin >> s; 

    int n = s.length();
    string reversed = ""; 

    for(int i=n; i<n; i){
        reversed += s[i]; 
    } 

    if (reversed == s) {
        cout << "YES"; 
    } else {
        cout << "NO"; 
    }

    return 0; 
}


//not done 