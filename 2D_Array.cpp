#include<iostream>
#include<stdio.h>
using namespace std;


int main(){

    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

  

    int *arr1[3];
    arr1[0]=(int *)malloc(4*sizeof(int));
    arr1[1]=(int *)malloc(4*sizeof(int));
    arr1[2]=(int *)malloc(4*sizeof(int));
    

    int **arr2=(int **)malloc(3*sizeof(int *));
    arr2[0]=(int *)malloc(4*sizeof(int));
    arr2[1]=(int *)malloc(4*sizeof(int));
    arr2[2]=(int *)malloc(4*sizeof(int));

    
      for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}