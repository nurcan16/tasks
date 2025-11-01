#include <iostream>
using namespace std;

int main(){
    int N,k;
    cout<<"ededi daxil edin:";
    cin>>N;
    for(int i=2;i<=N;i++){
        int k=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                k=1;
            }
        }
        if(k==0){
            cout<<i<<",";
        }
    }

    return 0;
    }





