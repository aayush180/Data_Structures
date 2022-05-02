#include <string.h>
#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){

    struct Rectangle r={10,5};
    // cout<<"Size is "<< sizeof(r);

    r.length =15;
    r.breadth =10;

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

}
