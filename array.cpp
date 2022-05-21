#include<iostream>
using namespace std;
int main(){
    int i,j;
    int x[3][2]={{3,8},{5,9},{1,7}};
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<"Element at x["<<i<<"]["<<j<<"]:";
            cout<<x[i][j]<<endl;
        }
    }
    
}