#include <iostream>
using namespace std;

int main(){

    int n;
    int nFactorial = 1;

    cout << "Enter number : ";
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        nFactorial = nFactorial * i;     
    }
    cout << n << "! = " << nFactorial;
    
    return 0;
}