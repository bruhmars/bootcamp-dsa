#include <iostream>
using namespace std; 

int main(){

    string s; 
    cin >> s;   

    int n = s.size();

    if(s.length() != 10){
        cout << "Weak"; 
        return 0;
    }

    bool has_lower = false; 
    bool has_upper = false; 
    bool has_digit = false; 
    bool has_special = false; 

    for (char c : s) { 
        if(islower(c)) has_lower = true; 
        else if(isupper(c)) has_upper = true; 
        else if(isdigit(c)) has_digit = true; 
        else has_special = true; 
    }

    if(has_lower && has_upper && has_digit && has_special){
        cout << "Strong" << endl; 
    } else {
        cout << "Weak" << endl; 
    }

    return 0; 
}