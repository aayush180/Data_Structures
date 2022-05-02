#include<iostream>
using namespace std;
template<class T>
class Arithematic{
    private:
    T l;
    T b;

    public:
    Arithematic(T l, T b);
    T add();
    T sub();
};
    template<class T>
    Arithematic<T>::Arithematic(T l,T b){
        this->l=l;
        this->b=b;
    }

    template<class T>
    T Arithematic<T>:: add(){
        T c;
        c=l+b;
        return c;
    }

    template<class T>
    T Arithematic<T>:: sub(){
        T d;
        d=l-b;
        return d;
    }



int main(){

    Arithematic<int> ar(10,5);
    cout<<"Add "<<ar.add()<<endl;
    cout<<"Sub "<<ar.sub()<<endl;

}