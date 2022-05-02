#include<iostream>
#include<stdio.h>
using namespace std;

int FindMinMax(int A[],int n){
    int min=A[0];
    int max=A[1];

    for(int i=1;i<n;i++){
        if(A[i] < min){
            min=A[i];
        }
        else if(A[i] > max){
            max=A[i];
        }
    }
    cout<<"Min Is "<<min<<endl;
    cout<<"Max Is "<<max<<endl;
}

int main(){
    int A[]={7,2,5,-1,8,3,1};
    int n=7;

    cout<<FindMinMax(A,n);
}