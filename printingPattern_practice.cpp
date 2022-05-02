#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void printRePattern(int m){
    for(int i=m;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}



int main(){
  //  printPattern(5);
  printRePattern(5);

}