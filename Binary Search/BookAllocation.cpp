#include <iostream>
using namespace std;

bool isValid(int arr[], int n , int m, int mid){
    int stu = 1;
    int pages = 0;

    for(int i=0 ; i<n ; i++){
        if(arr[i] > mid){
            return false;
        }
        if(pages + arr[i] <= mid){
            pages += arr[i];
        }else{
            stu++;
            pages = arr[i];
        }
    }
    
    if(stu<=m){
        return true;
    }else{
        return false;
    }

}

int arrSum(int arr[] , int n){
    int sum = 0;

    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n = 4;
    int arr[n] = {2,3,1,4};
    int m = 2;
    int ans=-1;
    int st=0;
    int end=arrSum(arr,n);

    if(m>n){
        return -1;
    }
    
    while(st<=end){
        int mid = st + (end - st)/2;

        if(isValid(arr,n,m,mid) == true){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    cout<<ans<<endl;

    return 0;
}