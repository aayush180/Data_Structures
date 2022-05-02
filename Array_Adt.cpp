#include<iostream>
#include<stdio.h>
using namespace std;

struct Array{
    int *A;
    int size;          ///Max elements which can be stored 
    int length;        ///length of the elements which are stored in the array
};

void Dispaly(struct Array arr){
    for(int i=0; i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main(){
    int n;
    struct Array arr;
    printf("Enter The Size :");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter The Value of N :");
    scanf("%d",&n);

    printf("Enter The Numbers :");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr.A[i]);
    }
    arr.length=n;

    Dispaly(arr);
}