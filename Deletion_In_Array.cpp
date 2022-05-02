#include<iostream>
#include<stdio.h>
#include<stdlib.h>
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

int Deletion(struct Array *arr,int index){

    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index; i<arr->length-1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }

}
int main(){
    struct Array arr={{2,4,6,8,3,5},10,6};
    
    printf("%d ",Deletion(&arr,0));
    printf("\n");
     Display(arr);

}