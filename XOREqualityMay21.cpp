#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int N, T;
    long long int x, count;
    long long int MOD = 1000000007;
    
    cin>>T;
    
    for(int i=0; i<T; i++){
        cin>>N;
        N = N % MOD;
        x = 2 % MOD;
        count = 1 % MOD;
        while(N>0){
            if(N%2 == 1){
                count = (x * count) % MOD;
            }
            x = (x * x) % MOD;
            N = (N / 2) % MOD;
        }
        count = count/2;
        //printf("%lld\n",count);
        cout<<count % MOD<<"\n";
    }
    return 0;
}
