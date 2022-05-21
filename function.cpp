#include <iostream>
using namespace std;
   // int sum(int a,int b){
    //int c=a+b;
    
   // return c;
   // }
    void swapPointer(int *a,int *b){
       int temp=*a;
        *a=*b;
        *b=temp;
    }
    int main(){
        int x;
        int y;
       // cout<<"The sum of 4 and 5 is:"<<sum(4,5)<<endl;
        cout<<"The value of x is " <<x<<endl<<"and the valur of y is "<<y<<endl;
        swapPointer(&x,&y);
        cout<<"The value of x is " <<x<<endl<<"and the value of y is "<<y<<endl;
    }

