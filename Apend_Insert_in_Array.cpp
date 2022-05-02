#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Array{
    int A[10];
    int size;   //The Total size of array
    int length; //The Elements presnt in the array
};

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

void Append(struct Array *arr,int element){
    if(arr->length<arr->size){
        arr->A[arr->length++]=element;
    }
}

void Insert(struct Array *arr,int index,int element){

    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=element;
        arr->length++;
}
}
int LinerSearch(struct Array arr,int key){

    for(int i=0;i<arr.length;i++){

        if(key==arr.A[i]){
            return i;
        }
    }
    return -1;
}

int main(){

    struct Array arr={{2,4,6,8,5,3},10,6};
    printf("%d\n",LinerSearch(arr,6));

  //  Append(&arr,7);
   // Insert(&arr,3,7);
  //  Display(arr);

}