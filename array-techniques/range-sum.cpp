#include <iostream> 
using namespace std; 

int main() {
    long long n; 
    cin >> n; 

    long long A[n]; 
    for(int i=0; i<n; i++){
        cin >> A[i]; 
    }
    
    //prefix sum array 
    long long P[n]; 
    long long sum = 0; 
    for(int i =0; i<n; i++){
        sum += A[i]; 
        P[i] = sum; 
    }

    //query
    long long q; 
    cin >> q; 

    for(int i =0; i<q; i++){
        int l, r; 
        cin >> l >> r; 
        
        if(l==1){
            cout<<P[r - 1] << "\n";
        } else{
            cout << (P[r-1] - P[l-2]) << "\n"; 
        }
    }
    return 0; 
}