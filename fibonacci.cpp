#include <iostream>
using namespace std;
int fib( int n){
    if(n<2){
        return n;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int a;
    cout<<"The value of a is :"<<endl;
    cin>>a;
    cout<<"thr term is "<<endl<<fib(a)<<endl;
}