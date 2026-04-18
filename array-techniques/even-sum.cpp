#include <iostream>
using namespace std; 

int main(){
    //arr input 
    long long n; 
    cin >> n; 

    long long A[n]; 
    for (int i=0; i<n; i++){
        cin >> A[i]; 
    }

    //prefix sum arr 
    long long P[n + 1]; 
    P[0] = 0; 
    for(int i = 1; i<=n; i++){
        if( i % 2 == 0){
            P[i] = P[i-1] + A[i-1]; 
        } else {
            P[i] = P[i-1]; 
        }
    }

    //query input 
    long long q; 
    cin >> q; 
    for(int i=0; i<q; i++){
        int l , r; 
        cin >> l >> r; 

        cout << P[r] - P[l-1] << "\n"; 
    }
    return 0; 
}