#include<iostream>
#include<stdlib.h>
using namespace std;

    struct Rectangle{
        int length;
        int breadth;
    };

int main(){

  struct Rectangle *p;
  p=(struct Rectangle*)malloc(sizeof(struct Rectangle));

  p->length=15;
  p->breadth=10;

  
  cout<<p->length<<endl;
  cout<<p->breadth<<endl;

  delete p;
    
}