#include <iostream>

using namespace std;

int main(){

    int a,b;

    cout<<"ededleri daxil edin:";
    cin>>a>>b;

    if(a>b) {
        cout<<a;
    }
    else if(a<b){
        cout<<b;
    }
    else {
        cout<<"Beraberdirler";
    }

    return 0;
}
