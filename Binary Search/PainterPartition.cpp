#include <iostream>
using namespace std;

bool isValid(int arr[], int n, int m, int mid){
    int painter = 1;
    int board = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i]>mid){
            return false;
        }
        if(board + arr[i] <= mid){
            board += arr[i]; 
        }else{
            painter++;
            board = arr[i];
        }
    }

    if(painter <= m){
        return true;
    }else{
        return false;
    }

}

int Sum(int arr[] , int n){
    int Sum = 0;
    for(int i = 0 ; i < n ; i++){
        Sum += arr[i];
    }
    return Sum;
}

int Min(int arr[], int n){
    int min = 0;

    for(int i = 0 ; i < n ; i++){
        min = max(min , arr[i]);
    }
    return min;
}


int main(){
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;
    int ans = -1;

    if(m > n){
        cout<<ans<<endl;
        return -1;
    }

    int st = Min(arr,n) ;
    int end = Sum(arr , n);

    while(st <= end){
        int mid = st + (end - st)/2;

        bool possible = isValid(arr, n, m ,mid);

        if(possible == true){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}