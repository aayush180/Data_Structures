#include<iostream>
#include<stdlib.h>   
using namespace std;

int main()
{

    // int a=10;
    // int *p;
    // p=&a;

    // cout<<*p;

    // int A[]={1,2,3,4,5,6};
    // int *ptr;
    // ptr=A;

    // for (int i = 0; i < 6; i++)
    // {
    // cout<< " "<<ptr[i];
    // }

// creating an array in dynamic memory ie:heap using pointers 

// int *ptr;
// //  ptr=(int *)malloc(5*sizeof(int));   // it allocates 20 bytes in the heap memory(5*4)ie:20 bytes or
//  ptr=new int[5];
//  ptr[0]=10;ptr[1]=12;ptr[2]=13;ptr[3]=14;ptr[4]=15;ptr[5]=16;

//  for (int i = 0; i <5;i++){
//      cout<< " "<<ptr[i];
//  }
//   delete[ ]ptr;
//   free(ptr);


struct Rectangle{
    int length;
    int breadth;
};

int *p1;
char *p2;
double *p3;
float *p4;
struct Rectangle *p5;

cout<<sizeof(p1)<<endl;
cout<<sizeof(p2)<<endl;
cout<<sizeof(p3)<<endl;
cout<<sizeof(p4)<<endl;
cout<<sizeof(p5)<<endl;

}