#include<iostream>
using namespace std;

int main()
{
    int *p,*q;
    int a=10,b=20;
    p=&a;
    q=&b;
    cout<<"*p+*q :"<<*p+*q<<endl;
    cout<<"*p**q :"<<*p**q<<endl;
    cout<<"*p-*q :"<<*p-*q<<endl;
    /*cout<<"*p/*q"<<*p/*q<<endl;*/
    cout<<"*p++ :"<<*p++<<endl;
    cout<<"*p-- :"<<*p--<<endl;
    cout<<"*q++ :"<<*q++<<endl;
    cout<<"*q-- :"<<*q--<<endl;

    /*cout<<"p+q :"<<p+q<<endl;*/
    /*cout<<"p*q :"<<p*q<<endl;*/
    cout<<"p-q :"<<p-q<<endl;
    /*cout<<"p/q"<<p/q<<endl;*/
    cout<<"p++ :"<<p++<<endl;
    cout<<"p-- :"<<p--<<endl;
    cout<<"q++ :"<<q++<<endl;
    cout<<"q-- :"<<q--<<endl;

}
