#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,small,index,pro = 1;
        cin>>n; 
        int a[n];

        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        
        small = a[0];

        for(int i = 0; i<n; i++){
            if(a[i]<=small){
                small = a[i];
                index = i;
            }
        }

        small++;
        a[index]=small;


        for(int i = 0; i<n; i++){
            pro *= a[i];
        }

        cout<<pro<<endl;

    }

    return 0;
}