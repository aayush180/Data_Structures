#include<iostream>
#include<stdio.h>
using namespace std;

//  Itreative Function For Fibonacci Series
int fib(int n){
    int t0=0,t1=1,sum;

    if(n<=1){
        return n;
    }
    else{
        for(int i=2;i<=n;i++){
          sum=t0+t1;
          t0=t1;
          t1=sum;
        }
        return sum;
    }
}                                                                           
// Recersive Function For Fibonacci Series  But Time Complxity is May Be O(2 power m)
int fib1(int m){

    if(m<=1){
        return m;
    }
    else{
        return fib1(m-2)+fib(m-1);
    }

}

// Recersive Function For Fibonacci Series Using Memoization
int f[10];
int fib2(int n){

    if(n<=1){
     f[n]=n;
     return n;
    }
    else{
        if(f[n-2]== -1){
            f[n-2]=fib2(n-2);
        }
        if(f[n-1]== -1){
            f[n-1]=fib2(n-1);
        }
    }
    return f[n-2]+f[n-1];
}

int main(){

    for(int i=0;i<10;i++){
        f[i]=-1;
    }

    int ans=fib2(6);
    cout<<ans<<endl;
}