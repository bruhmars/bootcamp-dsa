#include <iostream> 
using namespace std; 

int main() {

    int n; 
    cin >> n; 

    string name[100000]; 
    
    for(int i=0; i<n; i++){
        cin >> name[i]; 
    }

    string tar; 
    cin >> tar; 

    bool flag = false; 

    int l = 0; 
    int r = n - 1; 

    while (l <= r) {
        int mid = (l+r)/2; 

        if(name[mid] == tar) {
            flag = true; 
            break; 
        }

        if(name[mid] > tar){
            r = mid - 1; 
        } else {
            l = mid + 1; 
        }
    }

    if(flag){
        cout << "YES";
    } else {
        cout << "NO"; 
    }

    return 0; 
}