#include<iostream>
using namespace std;

int *fun(int size)
{
    int *p=(int *)malloc(size);

    for(int i = 0; i < size;i++){
        p[i] =i+1;
    }

    return p;
}
int main()
{
    int *ptr,length=6;

    ptr=fun(length);

    for(int i = 0; i < length;i++){
        cout<<ptr[i]<<" ";
    }

}