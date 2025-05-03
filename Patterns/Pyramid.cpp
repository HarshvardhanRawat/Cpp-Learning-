#include <iostream>
using namespace std;
int main(){
    int n=4;

    for(int i=0; i<n ; i++){ //no. of lines
        for(int j=0; j<(n-i-1) ;j++){ //print spaces
            cout<<" ";
        } for(int j=0; j<(i+1); j++){ //print number
            cout<<j+1;
        } for(int j=i; j>0 ; j--){ //reverse order
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}