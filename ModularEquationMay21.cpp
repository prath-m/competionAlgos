#include <bits/stdc++.h>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   register int T, N, M, count;
   register int a,b, x, y, z;
   
   cin>>T;
   
   while(T){
        cin>>N>>M;
        count=2;
        x=N;
        
        while(x>M){
            count++;
            x--;
        }
        y=(N-1)/2;
        while(y>M){
            count++;
            y--;
        }
        for(b=2; b<x; b++){
            for(a=2; a<y; a++){
                if(a<b && b<M){
                    if((M%a)%b == (M%b)%a){
                        count++;
                    }
                }
                else if(a==M || b==M){
                    count++;
                }
            }
        }
        //cout<<N<<" "<<M<<" "<<count<<" "<<z<<" "<<M/N<<"\n";
        cout<<count<<"\n";
        T--;
   }
   return 0;
}

/*
1≤a<b≤N and ((M%a) % b)=((M % b) % a)
*/
