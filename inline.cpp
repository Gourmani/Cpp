#include<iostream>
using namespace std;
float moneyreceived(int money,float factor=1.08 ){
    return money*factor;
}
int main(){
    int money=100000;
cout<<"current money is:"<<money<<endl<<"after one year is:"<<moneyreceived(money)<<endl;
cout<<"if u are a vip:"<<money<<endl<<"after one year is:"<<moneyreceived(money,1.2)<<endl;
}