#include <iostream>
using namespace std;

int main(){

    int t,sum = 0;
    cin>>t;

    while(t--){
        int x,n;
        cin>>x>>n;
        if(n%2==0){
            cout<<0<<endl;
        }
        if(n%2==1){
            cout<<x<<endl;
        }
    }

    return 0;
}