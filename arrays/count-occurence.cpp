#include <iostream> 
using namespace std; 

int main(){

    int n, target;
    cin >> n >> target; 

    long long arr[1000000]; 

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int count = 0; 
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            count++;
        }
    } cout << count << endl; 

    return 0; 
}