#include <iostream>
using namespace std;
int main(){
    int binNum=101;
    int pow=1;
    int ans=0;

    while(binNum>0){
        int rem = binNum%10;
        ans+=rem*pow;
        binNum/=10;
        pow*=2;
    }
    cout<<ans<<endl;
    return 0;
}