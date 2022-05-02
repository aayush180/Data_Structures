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

void Insertion(struct Array *arr,int element){
    int i=arr->length-1;
    if( arr->size > arr->length){
       while(i>=0 && arr->A[i] > element){
           arr->A[i+1]=arr->A[i];
           i--;
       }
       arr->A[i+1]=element;
       arr->length++;
    }
}

int main(){

    struct Array arr={{2,4,6,8,10,12},10,6};
    Display(arr);
    Insertion(&arr,7);
    cout<<"\nAfter Insertion"<<endl;
    Display(arr);


}