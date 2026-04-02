#include <iostream>
using namespace std; 

int main() {

    long long n; 
    cin >> n; 

    long long a[1000000]; 

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    int left = 0, right = n-1; 

     while (left < right) {
            swap(a[left], a[right]); 
            left++; 
            right--; 
    }

    for(int i=0; i<n; i++){
        cout<< a[i] << " ";
    }

    return 0; 
}