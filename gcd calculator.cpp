#include<iostream>
using namespace std;
int main(){
   int m,n,i,flag=0;
cin>>m>>n;
while(flag<=0)
{ if(m>=n){
    if(m%n==0){cout<<"gcd is "<<n;flag=1;}
    else{ m=m%n;
        }
          }
   else {i=m;
         m=n;
         n=i;
         }       
}
return 0;
}
