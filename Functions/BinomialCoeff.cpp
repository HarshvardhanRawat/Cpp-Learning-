#include <iostream>
using namespace std;

int fac(int n){
    int facN=1;
    while(n>0){
        facN = facN*n;
        n--;
    }
    return facN;
}

int main(){
    int n=10;
    int r=5;
    int i;

    i = fac(n)/(fac(r)*fac(n-r));
    
    cout<<"Binomial Coefficient = "<<i<<endl;

    return 0;
}