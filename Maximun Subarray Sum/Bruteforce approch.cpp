#include <iostream>
using namespace std;
int main(){
    int sz=5;
    int arr[sz]={1,2,3,4,5};
    int maxSum=INT_MIN;

    for(int st=0; st<sz ; st++){
        int cs = 0;
        for(int end=st ; end<sz ; end++){
            cs+=arr[end];
            maxSum = max(cs,maxSum);
            }
        }
        cout<<maxSum<<endl;
        return 0;
    }