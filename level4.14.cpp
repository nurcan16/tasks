#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a,q,ters=0;
    cout<<"ededi daxil edin:";
    cin>>a;
    int k=a;
    while(a>0){
        q=a%10;
        a=a/10;
        ters=ters*10+q;
    }
    if(k==ters){
        cout<<"beraberdir";
    }
    else{
        cout<<"beraber deyil"
    }

    return 0;
    }





