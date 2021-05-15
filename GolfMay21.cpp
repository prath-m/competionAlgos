#include<stdio.h>
#include<iostream>
using namespace std;

int main() {

	int T;
	int N, x, k;
	bool flag;
	scanf("%d", &T);
	
	while(T){
	   scanf("%d%d%d", &N, &x, &k);
	   flag = false;
	   for(register int c=0; c<=(N+2); c+=k){
         if(x==c){
            printf("YES\n");
            flag = true;
            break;
         }
     }
      if(flag == false){
         for(register int l=(N+1); l>=-1; l++){
            if(x==l){
               printf("YES\n");
               flag = true;
               break;
            }
         }
      }
      if(flag == false){
         printf("NO\n");
      }

      T--;
	}
	return 0;
}
