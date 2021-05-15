#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int gcd(int a, int b);
   
   int T, k, i,S;
   int m1, m2;
   vector<int> series;
      
   cin>>T;
   while(T != 0){
      cin>>k;
      
      S=0;
      i=0;
      while(i<(2*k+1)){
         m1 = k + (i*i);
         m2 = k + ( (i+1) * (i+1) );
         
         m1 = gcd(m1, m2) ;
         series.push_back(m1);
         i++;
      }
      
      i=0;
      while(i<(2*k+1)){
         S += series.at(i);;
      	i++;
      }
      
      cout<<--S<<"\n";
      T--;
   }
   	
	return 0;
}

int gcd(int a, int b){
   while (a != b){
      if (a > b) {a = a - b;}
      else {b = b - a;}
   }
   return a;
}
