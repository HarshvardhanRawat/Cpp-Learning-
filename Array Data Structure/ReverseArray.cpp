#include <iostream>
using namespace std;
int main(){
    int sz=9;
    int arr[]={9,8,7,6,5,4,3,2,1};

    for(int i=0; i<(sz/2); i++){
        swap(arr[i],arr[sz-1-i]);
    }
    for(int i=0 ; i<sz ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}