#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); // Fast I/O

    int t;
    cin >> t; // Number of test cases

    while(t--){
        long long n, k;
        cin >> n >> k; 

      
        long long a = n - k + 1;
        if(a < 1) a = 1; 

    
        long long floor_n1_over2 = (n + 1) / 2;

        long long floor_a_over2 = a / 2;

     
        int parity = ((floor_n1_over2 % 2) + (floor_a_over2 % 2)) % 2;

        if(parity == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
