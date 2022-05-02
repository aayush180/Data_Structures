#include<iostream>
#include<stdio.h>
using namespace std;

void Toh(int n,int a,int b,int c){

    if(n>0){
        Toh(n-1,a,c,b);
        printf("(%d,%d)",a,c);
        Toh(n-1,b,a,c);
    }
    
}

int main(){
    
    Toh(1,1,2,3);
}