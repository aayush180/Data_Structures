#include<iostream>
#include<stdio.h>
using namespace std;

// Finding Elements In A Sorted Array
 int FindDuplicates(int arr[],int size)
 {
 int lastduplicate=0;

 for(int i=0;i<size;i++)
 {
   if(arr[i] == arr[i+1] && arr[i] !=lastduplicate)
   {
       printf("%d ",arr[i]);
       lastduplicate=arr[i];
   }
}
 }

// Finding Elements In A Sorted Array Meathod 2
int countDulicate(int arr[],int size){

    int lastduplicate=0;
    for(int i=0;i<size;i++){
        if(arr[i] == arr[i+1]){
            int j=i+1;
            while(arr[j] == arr[i]){
                j++;
            }
            printf("%d Appearing %d Times \n",arr[i],j-i);
            i=j-1;
        }
    }
}

// Finding And Counting Elements in an Unsorted Array
int FindcountDuplicate(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int count=1;
        if(arr[i] != -1)
        {
            for(int j=i+1;j<size;j++)
            {
               if(arr[i] == arr[j])
               {
                   count++;
                   arr[j]=-1;
               }
            }
            if(count > 1){
                printf("%d is %d times \n",arr[i],count);
            }
        }
    }
}

int main(){

    int arr[]={1,7,7,4,3,2,2,2};
    //         0 1 2 3 4 5 6 7 8    <-Indexes  
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<FindcountDuplicate(arr,size);
}
