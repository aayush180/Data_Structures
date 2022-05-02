#include<iostream>
#include<stdio.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

// Itreative 
int BinarySearch(struct Array arr,int key,int size){
int mid;
int low=0;
int high=size-1;

while(low<=high){

  mid=(low+high)/2;
  if(arr.A[mid] == key){
    return mid;
  }
  if(key < arr.A[mid]){
    high=mid-1;
  }
  else{
    low=mid+1;
  }
}
    
}

// Recersive 
int BinarySearch2(struct Array arr,int low,int high,int key,int size){
      int mid;
  
      if(low <= high){
        mid=(low+high)/2;
        if(key == arr.A[mid]){
          return mid;
        }
        else if(key < arr.A[mid]){
          return BinarySearch2(arr,low,mid-1,key,size);
        }
        else{
          return BinarySearch2(arr,mid+1,high,key,size);
        }
      }
      return -1;
}
int main(){

  struct Array arr={{2,4,6,8,10,12},10,6};
  int size=6;
  int key=8;
  int low=0;
  int high=size-1;
  printf("%d Is Found On Index %d ",key,BinarySearch2(arr,low,high,key,size));



}