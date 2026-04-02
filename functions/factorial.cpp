#include <iostream> 
using namespace std; 

long long factorial(int n){
    long long val =1; 
    for(int i=n; i >= 1; i--){
        val *= i; 
    } return val; 
}

int main(){
    int n; 
    cin >> n; 

    cout << factorial(n); 
    return 0; 
}