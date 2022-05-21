#include <iostream>
using namespace std;
int nc2(int n){
    if(n<=1){
        return 1;
    }
    return (n/2)*(n-1);
}
int main(){

int n;
cout<<"Enter the numbers :"<<endl;
cin>>n;
cout<<"The value of nc2 is:"<<nc2(n)<<endl;
}
   