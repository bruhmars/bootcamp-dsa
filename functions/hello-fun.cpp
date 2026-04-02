#include <iostream> 
using namespace std; 

void print_ts (int n){
        for(int i=0; i<n; i++){
            cout << "I am learning functions" << endl;
        }
    }

int main(){
    
    int n; 
    cin >> n; 
    
    if (n<1 || n>1000){
        return 0;  
    }

    print_ts(n); 

    return 0; 
}