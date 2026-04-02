#include <iostream> 
using namespace std; 

int main(){

    int n;
    cin >> n; 
    
    long long arr[1000000];

    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }

    bool flag = false; 

    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            // chill h
        } else { 
            flag = true;
            break;  
        }
    }

    if(flag){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl; 
    }
    
    return 0; 
}