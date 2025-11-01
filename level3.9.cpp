#include <iostream>

using namespace std;

int main(){
    int a,k=0;
    cout<<"Ededi daxil edin:";
    cin>>a;
    for(int i=1;i<=a;i++) {
        if(a%i==0){
            k=k+1;
        }
    }
    if(k==2) {
        cout<<"Eded sadedir";
    }
    else if(k==1 || k==0){
        cout<<"eded ne sadedi ne de murekkeb:";
    }
    else {
        cout<<"Murekkeb ededdir";
    }
   return 0;
    }




