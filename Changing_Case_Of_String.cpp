#include<iostream>
#include<stdio.h>
using namespace std;

// Changing If The String Is Mixed 
int main(){
    char B[]={"wElCoMe"};
    int i;

    for(i=0;B[i] != '\0';i++){
        if(B[i] >= 65 && B[i] <=90){
            B[i]=B[i]+32;
        }
        else if(B[i] >=97 && B[i] <=122){
            B[i]=B[i]-32;
        }
    }
    printf("%s ",B);

}