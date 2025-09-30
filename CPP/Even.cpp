#include <iostream>
using namespace  std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, count=0,even=0;
        cin>>n;

        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        
        for(int i = 0;i<n;i++){
            if(arr[i]%2 != i%2){
                count++;
            }if(arr[i]%2==0){
                even++;
            }
        }
        
        if(abs(even-(n+1)/2)>0){
            cout<<-1<<endl;
        }else{
            cout<<count/2<<endl;
        }
    }
}