#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
 int arr[5]={1,2,3,4,5};
 int *p=(int *)malloc(10*sizeof(int));
 p[0]=0;
 p[1]=1;
 p[2]=2;
 p[3]=3;
 p[4]=4;

 for(int i=0; i<5; i++){
  printf("%d ",arr[i]);
 }
 cout<<"\n";
 for(int i=0; i<5; i++){
     printf("%d ",p[i]);
 }
free(p);
 


}