#include <iostream>
using namespace std;

int main(){
    int digitsum = 0;
    int num = 1129;

    while(num > 0){
    int l = num%10;
    num = num/10;
    digitsum = digitsum + l;
        }
    cout<<digitsum<<endl;

return 0;
}