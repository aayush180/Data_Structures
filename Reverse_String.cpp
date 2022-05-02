#include<iostream>
#include<stdio.h>
using namespace std;
//                                                      i=0  1  2  3  4  5   6
// Reverse String By Using Two Pointers             ex->A[p][y][t][h][o][n][\0]
//                                                      j=0  1  2  3  4  5   6 

int main(){

    char A[]={"Python"};
    int i,j,temp;

    for( j=0;A[j]!='\0';j++){
    }
    j=j-1;

    for(int i=0;i<j;i++,j--){
       temp=A[i];
       A[i]=A[j];
       A[j]=temp;
    }
    printf("%s ",A);

    
}