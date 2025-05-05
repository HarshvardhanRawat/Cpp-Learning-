#include <iostream>
using namespace std;

bool isPrime(int n){ //check prime
    for (int i=2; i<n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){ //print prime number till n

    int n=30;

    for(int i=2; i<=n; i++){
        if (isPrime(i) == true){
            cout<<i<<endl;
        }
    }
    return 0;
}