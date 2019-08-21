#include<iostream>
using namespace std;
int main(){
    int M,N,i,j;
    cin>>M>>N;
int m=M,n=N;
int flag=0;
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