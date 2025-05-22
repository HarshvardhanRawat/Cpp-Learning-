#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,2,1,1};

    for(int i=0 ; i<n ; i++){
        int count=0;
        for(int j=0 ; j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > n/2){
            cout<<"Majority element= "<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}
