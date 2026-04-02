#include <iostream> 
using namespace std; 

int main() {

    int n; 
    cin >> n; 

    long long a[1000000]; 
    
    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    for(int i=0; i<n; i++){
        int mn = a[i]; 
        int loc = i; 

        for(int j=i-1; j<n; j++){
            if(a[j] < mn){
                mn = a[j]; 
                loc = j; 
            }
        }
        swap(a[i], a[loc]); 
        cout << "Pass " << i + 1 << ": "; 

        for(int k=0; k<n; k++ ){
            cout << a[k]; 
            if(k< n-1) cout << " "; 
        }

        cout << " , min_selected = " << mn << endl; 
    }

    return 0; 
}
