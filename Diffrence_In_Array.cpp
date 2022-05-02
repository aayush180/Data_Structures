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

struct Array *Diffrence(struct Array *arr1,struct Array *arr2){

int i=0,j=0,k=0;
struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

while(i<arr1->length && j<arr2->length)
{
    if(arr1->A[i] < arr2->A[j]){
        arr3->A[k]=arr1->A[i];
        i++;
        k++;
    }
    else if (arr2->A[j] < arr1->A[i]){
       j++;
    }
    else{
        i++;
        j++;
    }
}
    for(;i<arr1->length;i++){
        arr3->A[k]=arr1->A[i];
    }

    arr3->size=10;
    arr3->length=k;

    return arr3;

}
int main(){

    struct Array arr1={{1,3,5,7,9},10,5};
    struct Array arr2={{2,3,6,7,10},10,5};
    struct Array *arr3;

    arr3=Diffrence(&arr1,&arr2);
    Display(*arr3);

}