#include <iostream>
using namespace std;

void selectionSort(int arr[] , int n){

    for(int i = 0 ; i < n ; i++){
        int si = i ;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[si]){
                si = j;
            }
        }
        swap(arr[si] , arr[i]);
    }
}

void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n = 5;
    int arr[n] = {4,1,5,2,3};

    selectionSort(arr , n); 
    printArray(arr , n);

    return 0;
}

