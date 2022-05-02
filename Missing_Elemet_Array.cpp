#include<iostream>
#include<stdio.h>
using namespace std;

// For Single Missing Element
int FindMissing(int arr[],int n,int h){
  int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int s=h*(h+1)/2;
    int ans=s-sum;
    return ans;
}

// For Single Missing Element By Meathod 2
int FindMissing1(int arr[],int n)
{
    int diff=arr[0]-0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]-i != diff)
      {
         cout<<"Missing is "<<i+diff<<endl;
         break;
      }
    }
}

// For Multiple Missing Elements In Array
int FindMissing2(int arr[],int n){

    int low=arr[0];
    int high=15;
    int diff=low-0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]-i != diff){
            while(diff < arr[i]-i){
              int store=i+diff;
              printf("%d ",store);
                diff++;
            }
        }
    }

}

int main(){
    int h=11;
    int arr[]={6,7,10,11,12,14,15};
    int n=7;
    
    cout<<FindMissing2(arr,n);
   
}