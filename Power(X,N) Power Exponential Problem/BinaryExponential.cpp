#include <iostream>
using namespace std;
int main(){
    int n=5;
    double x=3;
    long BinForm=n;
    if(n < 0){
        x=1/x;
        BinForm = -BinForm;
    }
    double ans=1;

    while(BinForm > 0){
        if(BinForm %2 ==1){
            ans*=x;
        }
        x*=x;
        BinForm/=2;
    }
    cout<<ans<<endl;

    return 0;
}