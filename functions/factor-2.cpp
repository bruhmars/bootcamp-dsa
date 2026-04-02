#include <iostream> 
using namespace std; 

void factor2(int n){
    for(int i=n; i>=1; i--){
        if(n%i == 0){
            cout << i << " "; 
        }
    }
}

int main(){

    int n; 
    cin >> n; 

    if(n<1 || n>100000){
        return 0; 
    }

    factor2(n); 

    return 0; 
}