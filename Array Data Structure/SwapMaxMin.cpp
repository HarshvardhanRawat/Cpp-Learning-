//Swap Max and Min in an array
#include <iostream>
using namespace std;
void MaxMin(int arr[],int sz , int &positionM , int &positionm){
     int M=INT_MIN;
    int m=INT_MAX;

    for(int i=0 ; i<sz ; i++){
        M=max(arr[i],M);
        m=min(arr[i],m);

        if(M==arr[i]){
            positionM=i;
        }
        if(m==arr[i]){
            positionm=i;
        }
    }
}

int main(){
    int positionM;
    int positionm;
    int sz=5;
    int arr[5]={9,-10,8,25,3};

    MaxMin(arr,sz,positionM,positionm);
    swap(arr[positionM],arr[positionm]);

    for(int i = 0; i<sz ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}