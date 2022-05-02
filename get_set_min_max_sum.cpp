#include<iostream>
#include<stdio.h>
using namespace std;

struct Array {
 int A[10];
 int size;
 int length;
};

void Display(struct Array arr){
    for(int i=0; i<arr.length; i++){
        printf("%d ",arr.A[i]);
    }
}

int Get(struct Array arr,int index){
 if(index >=0 && index<arr.length){
     return arr.A[index];
 }
}

void Set(struct Array *arr,int index,int value){

    if(index >=0 && index<arr->length){
        arr->A[index] = value;
    }
}

int Min(struct Array arr){
    int min=arr.A[0];

    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;

}

int Max(struct Array arr){
    int max=arr.A[0];

    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
    }
}
return max;
}

int Sum(struct Array arr){
    int total=0;

    for(int i=0;i<arr.length;i++){
        total += arr.A[i];
    }
    return total;
}


int main(){

    struct Array arr={{1,3,0,17,9,7},10,6};
    printf("%f\n",Avg(arr));
    Display(arr);

}