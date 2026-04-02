#include <iostream>
using namespace std; 
 
int main (){
    int n;
    cin >> n; 
    
    long long arr[1000000];
    
    for(long long i=0; i<n; i++){
        cin >> arr[i]; 
    }
    
    long long ans = arr[0], location =1;
    for(long long i=1; i<n; i++){
        if(arr[i]>ans){
            ans = arr[i];
            location = i+1; 
        }
    } cout << ans << " "<< location << endl; 
    
    return 0; 
}