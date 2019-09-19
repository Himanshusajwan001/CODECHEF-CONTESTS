#include <iostream>
using namespace std;

int main() {
    
    long long unsigned int t;
    cin >> t;
    while(t--) {
        long long unsigned int n,l,z;
        cin>>n;
        
        if(n==1) cout << '0' << endl;
        else if(n>1 &&n<4) cout << '1' << endl;
        else {
            if(n>=64) {
                while(n>=64)
                    n/=16;
            }
            if(n>=4 && n<8) cout << '2' << "\n";
            else if(n>=8 &&n<16) cout << '3' << "\n";
            else if(n>=16 &&n<32) cout << '0' << "\n";
            else if(n>=32 &&n<64) cout << '9' << "\n";
        }
    }
return 0;
}
