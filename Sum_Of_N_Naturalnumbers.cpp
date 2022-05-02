#include<iostream>
#include<stdio.h>
using namespace std;

int sum(int n){

    if(n == 0){
        return 0;
    }
    return sum(n-1)+n;
}
// Itreative way for finding sum of n natural numbers
int iterativeSum(int m){
    int sum=0;

    for(int i=1;i<=m;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int ans =iterativeSum(6);
    cout<<ans;
}