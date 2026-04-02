#include <iostream> 
using namespace std; 

int main (){

    int t; 
    cin >> t; 

    while (t--){
        int n; 
        cin >> n; 

        int zeroCnt = 0; 

        for(int i =0; i<n; i++){
            int x; 
            cin >> x; 
            if(x == 0) zeroCnt++; 
        }
    }

    return 0; 
}

//not done 