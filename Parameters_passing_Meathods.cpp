#include<iostream>
using namespace std;

// Call by Adress

void swap(int *a,int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Call by Refrance

void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}

int main(){

int x=10,y=15;
// swap(&x,&y);
swap1(x,y);

cout<<"First number "<<x<<endl;
cout<<"Second number "<<y<<endl;





}