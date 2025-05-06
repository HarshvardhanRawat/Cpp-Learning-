#include <iostream>
using namespace std;

int main(){
    int Num=10;
    int power = 1;
    int ans = 0;

    while (Num>0){
        int rem = Num%2;
        Num/=2;
        ans+=rem*power;
        power*=10;
    }
    cout<<ans;
    return 0;
}