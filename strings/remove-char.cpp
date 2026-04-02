#include <iostream>
using namespace std; 

int main(){

    string s; 
    cin >> s;

    char ch1; 
    cin >> ch1; 

    int n = s.size();
    string result = ""; 

    for(int i=0; i<n; i++){
        if(s[i] != ch1){
            result = result + s[i];
        }
    }

    cout << result << endl; 

    return 0; 
}