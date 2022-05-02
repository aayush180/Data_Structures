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

struct Array *merge(struct Array *arr1,struct Array *arr2)
{

int i=0,j=0,k=0;
struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
while(i<arr1->length && j<arr2->length){
    if(arr1->A[i] < arr2->A[j]){
        arr3->A[k]=arr1->A[i];
        k++;
        i++; 
    }
    else{
        arr3->A[k]=arr2->A[j];
        k++;
        j++;
    }
}
for(;i<arr1->length;i++){
    arr3->A[k]=arr1->A[i];
}
for(;j<arr2->length;j++){
    arr3->A[k]=arr2->A[j];
}
arr3->length=arr1->length+arr2->length;
arr3->size=12;
return arr3;

}

int main(){
    struct Array arr1={{2,4,6,8,10,12},12,6};
    struct Array arr2={{1,3,5,7,9,11},12,6};
    struct Array *arr3;

    arr3=merge(&arr1,&arr2);
    Display(*arr3);
}