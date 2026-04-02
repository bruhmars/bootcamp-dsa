#include <iostream>
using namespace std; 

int main() {

    string s; 
    getline(cin, s); 

    int n = s.size(); 
    int cnt = 0; 

    for(int i=0; i<n; i++){
        if(s[i] == ' '){
            cnt++;  
        }
    }

    cout << cnt + 1 << endl; 

    return 0; 
}