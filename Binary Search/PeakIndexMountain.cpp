#include <iostream>
#include <vector>
using namespace std;

int PeakVal(int A[], int n){

    int st=1;
    int end=n-2;
   
    while(st<=end){

        int mid = st + (end - st) / 2;

        if(A[mid - 1] < A[mid] && A[mid] > A[mid + 1]){
            return mid;
        } else if(A[mid - 1] < A[mid]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }

    }
    return -1;
}

int main(){
    int arr[]={0,3,8,9,5,2};
    int n=6;
    int ans = PeakVal(arr,n);

    cout<<arr[ans]<<endl;
    return 0;
}