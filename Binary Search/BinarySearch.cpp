#include <iostream>
using namespace std;
int BinarySearch(int arr[], int tar , int n){
    int st=0;
    int end=n-1;

    while(st<=end){
        int mid = st + (end-st)/2;  // (st+end)/2 cannot handle large value

        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int n=7;
    int arr[n]={-1,0,3,4,5,9,11};
    int tar=12;

    int result = BinarySearch(arr,tar,n);
    if(result==-1){
        cout<<"Target not found"<<endl;
    }else{
        cout<<"Target found at index = "<<result<<endl;
    }

    return 0;
}