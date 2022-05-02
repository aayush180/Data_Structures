#include<iostream>
#include<stdio.h>
using namespace std;

int fact(int n){

    if(n == 0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }

 }

 // Iterative Function For nCr 
 int ncr(int n,int r){

     int num, den;
     num=fact(n);
     den=fact(r)*fact(n-r);

     return num/den;
 }

 // Recursive Function for nCr 
 int NCR(int n,int r){

   if(n == r || r == 0){
       return 1;
   }
   else{
       return NCR(n-1,r-1)+NCR(n-1,r);
   }
 }

 int main(){
     cout<<NCR(4,2);
 }