#include <iostream>
using namespace std;
//level-2.2
int umumi(int n){
    if(n>0)
        return 0;
    if(n<0)
        return 1;
    return 2;

}

int main() {
    int n;
    cout<<"bir eded daxil et:";
    cin>>n;
    if (umumi(n)==0){
        cout<<"Musbetdir";
    }
    else if(umumi(n)==1){
        cout<<"Menfi";
    }
    else{
        cout<<"0-dir";
    }


	return 0;
}

