#include <iostream>
 
using namespace std;
 
int main(){
    int n,temp = 0, count=0;
    cin>>n;
 
    while(n--){
        int i;
        cin>>i;
 
        if(temp!=i){
            temp=i;
            count++;
        }
    }
    cout<<count;
    return 0;
}