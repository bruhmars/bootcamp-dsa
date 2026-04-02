#include <iostream>
using namespace std; 

int main() {

    int t; 
    cin >> t; 

    while (t!=0) {
        int n; 
        cin >> n; 

        long long arr[100000]; 
        for(int i=0; i<n; i++){
            cin >> arr[i]; 
        }

        int l=0;
        int r=1;
        int temp ;
        while (r < n){
            if(arr[l]==0 && arr[r]!= 0){
                temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                l++, r++;
            } 
            else if(arr[l]==0 && arr[r] == 0){
                r++;
            }
            else {
                l++;
                r++;
            }

        } 
        t--; 
        cout << arr; 
    }

    return 0; 
}