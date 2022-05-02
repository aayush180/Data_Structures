#include<iostream>
using namespace std;

void fun(int arr[],int n){
   arr[0]=7;
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;

    fun(arr,n);


}