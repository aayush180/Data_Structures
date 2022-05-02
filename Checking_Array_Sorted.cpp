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
// Function For Sorting The Array
int IsSorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
            return 0;
        }
    }
    return 1;
}

//  Function For Rearranging The Arrray
void Rearrange(struct Array *arr){

    int i=0;                // I for negative Numbers
    int j=arr->length-1;    // J for Positive Numbers

    while(i<j){
        while(arr->A[i]<0) i++;  // For Checking negative numbers
        while(arr->A[j]>=0) j--; // For checking positive numbers
        if(i<j){
            int temp=arr->A[i];
            arr->A[i]=arr->A[j];
            arr->A[j]=temp;
        }
    }
}


int main(){

    struct Array arr={{2,-4,6,-8,10,-12},10,6};
    Display(arr);
    cout<<"\nAfter Rearranging"<<endl;
    Rearrange(&arr);
    Display(arr);
    

}