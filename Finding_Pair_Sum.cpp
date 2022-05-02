#include<iostream>
#include<stdio.h>
using namespace std;

// Finding Sum Pair in A Unsorted Array Time_Complexity=O(n^2)
int pairSum(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == k){
                printf("%d + %d = %d\n",arr[i],arr[j],k);
            }
        }
    }
}

// Finding Pair Sum In A Sorted Array
int Pairsum2(int arr[],int n,int k){
    int i=0;
    int j=n-1;
    
    while(i<j){
        if(arr[i]+arr[j] == k){
            printf("%d + %d = %d\n",arr[i],arr[j],k);
            i++;
            j--;
        }
        else if (arr[i]+arr[j] < k){
            i++;
        }
        else{
            j--;
        }

    }
}

int main(){
    int arr[]={1,3,4,5,7,8,9,10};
    int n=8;
    int k=10;
    
    cout<<Pairsum2(arr,n,k);




}