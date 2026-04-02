#include <iostream>
using namespace std; 

int main() {
    int n; 
    cin >> n; 

    int a[10000]; 
    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    int slar = -1; 
    int lar = 0; 

    for(int i=0; i<n; i++){
        if(a[i] > lar){
            slar = lar; 
            lar = a[i]; 
        } else if(a[i] > slar && a[i] != lar){
            slar = a[i]; 
        } 
    } 
        cout << slar;

    return 0; 
}

//not done 