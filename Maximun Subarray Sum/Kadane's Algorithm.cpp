#include <iostream>
using namespace std;
int main(){
    int sz=5;
    int arr[sz]={1,2,-3,4,-2};
    int cs=0;
    int maxSum=INT_MIN;

    for(int i=0 ; i<sz ; i++){
        cs+=arr[i];
        maxSum=max(cs,maxSum);
        if(cs<0){
            cs=0;
        }
    }
    cout<<maxSum;
    return 0;
}