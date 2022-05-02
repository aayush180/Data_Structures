#include<iostream>
#include<stdlib.h>
using namespace std;


struct rectangle{
    int length;
    int breadth;
};

// void fun(struct rectangle r1)                   //Structure As Call By Value
// {
//     r1.length=15;
//     cout<<"length "<<r1.length<<"\n"<<"Breadth "<<r1.breadth<<endl;
// }

// void fun1(struct rectangle *p)                  //Structure As Call By Adress
// {
//     p->length=20;
//     cout<<"length "<<p->length<<"\n"<<"Breadth "<<p->breadth<<endl;

// }

// Creating Structure Object In Function

struct rectangle *fun (){
    struct rectangle *p=(struct rectangle *)malloc(sizeof(struct rectangle));           // Or we can write struct rectangle *p=new rectangle;
    p->length=15;
    p->breadth=10;

    return p;
}

int main(){

    struct rectangle r={10,5};

    struct rectangle *ptr=fun();
    cout<<"length "<<ptr->length<<"\n"<<"Breadth "<<ptr->breadth<<endl;


}