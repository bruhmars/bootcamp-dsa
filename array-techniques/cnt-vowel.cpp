#include <iostream>
using namespace std; 

int main (){
    long long n; 
    cin >> n; 

    string s; 
    cin >> s; 

    int P[n+1] ; 
    P[0] = 0; 
    for(int i=1; i<=n; i++){
        char c = s[i-1]; 
        if(c=='a' ||c=='e' || c=='i' || c=='o' || c=='u'){
            P[i] = P[i-1] + 1; 
        } else {
            P[i] = P[i-1]; 
        }
    }   

    //querry 
    int q; 
    cin >> q; 
    for(int i=0; i<q; i++){
        int l, r; 
        cin >> l >> r; 

        cout << P[r] - P[l-1] << "\n"; 
    }
    return 0; 
}