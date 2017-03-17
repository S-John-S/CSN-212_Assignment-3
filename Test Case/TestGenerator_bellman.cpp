#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int n,e; cin>> n ;
    int src=0; //cin>>src; 
    int mod; cin >> mod;
    cout<<n<<" "<<n*(n-1)/2<<endl;
    cout<<src<<endl;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            cout<<i<<" "<<j<<" "<<rand()%mod<<endl;
        }
    }
    return 0;
}
