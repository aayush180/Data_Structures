#include<iostream>
using namespace std;

int fun1(int n){
    if(n>0){
        return fun1(n-1)+n;
    }
}

// Static Variable 
int fun2(int n){
    static int v=0;
    if(n>0){
        v++;
        return fun2(n-1)+v;
    }
}

// Global variable 
int m=0;                //<- Globally Asigned Variable
int fun3(int n){
    
    if(n>0){
        m++;
        return fun3(n-1)+m;
    }
}

int main(){

    int x=5;

    int ans=fun3(x);
    cout<<ans<<endl;

   printf("Again Calling Function\n");

    int ans1=fun3(x);
    cout<<ans1<<endl;

}