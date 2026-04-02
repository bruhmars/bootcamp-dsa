    #include <iostream>
    using namespace std; 

    int main(){

        int n; 
        cin >> n;  

        long long sum = 0; 
        long long a[100000];

        for(int i=0; i<n; i ++){
            cin >> a[i]; 
            sum += a[i]; 
        } cout << sum; 
        return 0; 
    }