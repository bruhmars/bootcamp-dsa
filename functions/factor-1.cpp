#include <iostream>
using namespace std; 

void factor_1(int n){
        for(int i=1; i<=n; i++){
            if(n%i == 0){
                cout << i << " "; 
            }
        }
    }

int main(){

    int n; 
    cin >> n; 

    factor_1(n);
    
    if(n > 1 || n < 1000000){
        return 0; 
    }

    return 0;
}