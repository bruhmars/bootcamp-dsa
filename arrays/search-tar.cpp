#include <iostream> 
using namespace std; 

int main(){

    int n; 
    cin >> n; 

    int target; 
    cin >> target; 

    long long arr[1000000];
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }

    bool flag = false; 
    for(long long i=0; i<n; i++){
        if(arr[i] == target){
            flag = true;
        }
    }

    if(flag == true){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }
    
    return 0; 
}