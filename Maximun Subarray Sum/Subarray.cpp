//print subarray
#include <iostream>
using namespace std;
int main(){
    int sz=5;
    int arr[sz]={9,7,8,6,5};


    for(int st=0 ; st<sz ; st++){
        for(int end=st ; end<sz ; end++){
            for(int i=st; i<=end ; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}