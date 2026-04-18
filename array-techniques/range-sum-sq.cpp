#include <iostream>
using namespace std; 

int main() {
    long long n, q;
    cin >> n >> q; 

    long long A[n]; 
    for(int i = 0; i<n; i++){
        cin >> A[i]; 
    }

    //prefix sum arr 
    long long P[n]; 
    long long sum = 0; 
    for(int i =0; i<n; i++){
        sum += A[i] * A[i]; 
        P[i] = sum; 
    }

    //query 
    while (q--) {
        long long l, r; 
        cin >> l >> r; 
        l--; 
        r--; 

        if(l == 0) {
            cout << P[r] << "\n"; 
        } else {
            cout << P[r] - P[l-1] << "\n"; 
        }
    }

    return 0; 
}