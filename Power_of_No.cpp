#include<iostream>
#include<stdio.h>
using namespace std;

int pow(int m,int n){

    if(n == 0){
        return 1;
    }
    return pow(m,n-1)*m;
}

// Another Way to write The Recursion to find power of no 

int pow2(int m,int n){

    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return pow(m*m,n/2);
    }
    else{
        return m*pow(m*m,(n-1)/2);
    }
}


int main(){

    int ans=pow2(2,9);
    cout<<ans;
    
}