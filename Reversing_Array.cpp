#include<iostream>
#include<stdio.h>
using namespace std;


struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

void Reverse(struct Array *arr){
    int *b,i,j;
    b=(int *)malloc(arr->length*sizeof(int));

    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        b[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++){
        arr->A[i]=b[i];
    }
}

// By Swapping 
void Reverse2(struct Array *arr){
    int i,j;
    int temp;
    for(int i=0,j=arr->length-1;i<j;i++,j--){
       temp=arr->A[i];
       arr->A[i]=arr->A[j];
       arr->A[j]=temp;
    }
}
int main(){

    struct Array arr={{1,3,5,6,7,8},10,6};
    Display(arr);
    Reverse2(&arr);
    cout<<"\nAfter Reversing"<<endl;
    Display(arr);
}

