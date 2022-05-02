#include<iostream>
using namespace std;


int add(int a,int b)   //Formal parameters
{
    int c=a+b;
    return c;
}

int main(){

    int n1=10,n2=5,sum;  //Actual parameters

    sum=add(10,5);
    cout<<sum<<endl;

}