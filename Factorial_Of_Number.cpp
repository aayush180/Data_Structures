#include<iostream>
#include<stdio.h>
using namespace std;

int fact(int n){

    if(n==0 || n==1){
      return 1;
    }
    return fact(n-1)*n;
}

// Factorial of number using iterative approach
int fact2(int m)
{
int f=1;
   for(int i=1;i<=m;i++){
       f=f*i;
   }
   return f;
}

int main(){

  int ans=fact(26);
  int ans2=fact2(5);

  cout<<ans<<endl;
  cout<<ans2<<endl;
  

}