#include <iostream>
using namespace std;
int main(){
    int n=3;

    for(int i=0;i<n;i++){ //for star
        for(int j=1;j<=n;j++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }


    return 0;
}