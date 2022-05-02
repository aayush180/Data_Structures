#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

    int *p=(int *)malloc(5*sizeof(int));
    p[0]=0;
    p[1]=2;
    p[2]=4;
    p[3]=6;
    p[4]=8;
   
    int *q=(int *)malloc(10*sizeof(int));
    
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }

    free(p);
    p=q;
    q=NULL;

    for(int i=0;i<5;i++){
        printf("%d ",p[i]);
    }
}