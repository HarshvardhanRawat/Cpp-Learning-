#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int tar){
    for(int i=0 ; i<sz ; i++){
        if(arr[i]==tar){
            return i;
        }
    }
    return -1;
}

int main(){
    int tar=2;
    int sz=10;
    int arr[]={3,5,7,9,0,6,4,2,1,8};

  cout<<linearSearch(arr, sz , tar)<<endl;

    return 0;
}