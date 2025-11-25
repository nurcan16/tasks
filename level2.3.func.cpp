#include <iostream>
using namespace std;
//level-2.3

int enböyük(int a,int b,int c) {
    int max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    return max;
    }
int main() {
    int x,y,z;
    cout<<"Uc eded daxil edin:";
    cin>>x;
    cin>>y;
    cin>>z;
    int m=enböyük(x,y,z);
    cout<<"En boyuk eded:"<<m<<endl;



	return 0;
}

