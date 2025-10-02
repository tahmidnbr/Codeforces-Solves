#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    
    while(t--){
        char n[10][10];

        int count = 0;
        
        for(int i  = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                cin>>n[i][j];
            }
        }

        for(int i  = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                if(n[i][j] == 'X'){
                    int dis = min({i,j,9-i,9-j});
                    count += dis+1;
                }
            
            }

        }
        cout<<count<<endl;



    }
    return 0;
}