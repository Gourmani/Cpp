#include <iostream>

using namespace std;

int main() {
   int i;
   int N;
   cin>>N;
   int a[N];
   for(i=0;i<=N;i++){
       cin>>a[N];
   }
          for(i=N-1;i>=0;i--){
       cout<<a[i];
           }

    return 0;
}
