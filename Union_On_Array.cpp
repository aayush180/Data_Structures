#include<iostream>
#include<stdio.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){

    for(int i=0; i<=arr.length; i++){
        printf("%d ",arr.A[i]);
    }
}

struct Array *Union(struct Array *arr1,struct Array *arr2){

    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k]=arr1->A[i];
            i++;
            k++;
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k]=arr2->A[j];
            j++;
            k++;
        }
        else{
            arr3->A[k]=arr1->A[i];
            i++;
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

    arr3->length=k;
    arr3->size=10;

    return arr3;

}



int main()
{

    struct Array arr1={{2,3,4,6,10},10,5};
    struct Array arr2={{1,3,6,7,8},10,5};
    struct Array *arr3;
    
    arr3=Union(&arr1,&arr2);
    Display(*arr3);
    
}