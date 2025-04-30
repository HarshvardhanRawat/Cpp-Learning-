#include <iostream>
using namespace std; // sum of odd numbers one to N

int main () {
 int n=10;
 int sum = 0;

    for(int i=1; i<=n; i++) {
        if(i%2!=0){
             sum = sum + i;
        }
    }

    cout << sum << endl;

    return 0;
}