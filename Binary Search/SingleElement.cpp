#include <iostream>
#include <vector>
using namespace std;

int SingleSearch(int A[], int n){

    int st = 0;
    int end = n - 1;

    if(n==1){
        return 0;
    }
    
    while(st<=end){
        int mid = st + (end - st) / 2;

        if(mid == 0 && A[0]!=A[1]){
            return mid;
        }
        if(mid == (n-1) && A[n-1]!=A[n-2]){
            return mid;
        }

        if(A[mid] != A[mid + 1] && A[mid] != A[mid - 1]){
            return mid;
        }
        if(mid%2==0){
            if(A[mid]==A[mid+1]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }else{
            if(A[mid] == A[mid + 1]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={1,1,2,3,3,4,4};
    int n=6;
    int ans = SingleSearch(arr,n);

    cout<<arr[ans]<<endl;
    return 0;
}