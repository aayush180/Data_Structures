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
void Swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(key == arr.A[i]){
            return i;
        }
    }
    return -1;
}

// Modified LinearSearch 
                     
// 1] Transposition
int LinearSearch1(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key == arr->A[i]){
          Swap(&arr->A[i],&arr->A[i-1]);
          return i;
        }
    }
    return -1;
}

// 2] Move To Forword/Head
int LinearSearch2(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
      if(key == arr->A[i]){
          Swap(&arr->A[i],&arr->A[0]);
          return i;
      }
    }
    return -1;
}

int main(){

    struct Array arr={{2,4,6,8,3,5},10,6};
    
    printf("%d\n",LinearSearch2(&arr,8));
    Display(arr);

}