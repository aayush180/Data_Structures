#include<stdio.h>
#include<iostream>
using namespace std;

void fun1(int n){

    if(n>0){

        printf("%d ",n);
        fun1(n-1);
    }
}

void fun2(int m){

    if(m>0){
        fun2(m-1);
        printf("%d ",m);
    }
}

int main(){

    int x=5;
    fun1(x);
    printf("\n");
    fun2(x);

}