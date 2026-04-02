#include <iostream>
using namespace std; 

int main(){

    string s; 
    getline(cin, s);  

    int n = s.size();
    string result = ""; 

    for(int i=0; i<n; i++){
        if(s[i] != ' '){
            result += s[i]; 
        }
    }

    cout << result << endl; 

    return 0; 
}