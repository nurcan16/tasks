#include <iostream>
using namespace std;

int main(){
    for(int i=100;i<1000;i++){
        int cem=0;
        int k=i;
        while(k>0){
            cem=cem+k%10;
            k=k/10;
        }
        if(cem==10){
            cout<<i<<" ";
        }
    }



    return 0;
    }





