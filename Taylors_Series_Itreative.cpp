#include<iostream>
#include<stdio.h>
using namespace std;

double e(int x,int n){
    double s=1;

    double num=1;
    double den=1;

    for(int i=1;i<=n;i++){
        num=num*x;
        den=den*i;
        s=s+num/den;
    }
    return s;
}

int main(){
    double ans=e(1,10);
    cout<<ans;
}