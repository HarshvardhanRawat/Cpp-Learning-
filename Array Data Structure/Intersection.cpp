//print intersection of two arrays without repetition 
#include <iostream>
using namespace std;
int main(){
    int size = 5;
    int arr1[5] = {2,4,3,2,10};
    int arr2[5] = {2,5,7,3,9};
    int arr3[5];
    int k=0;

    for(int i=0 ; i<size ; i++){
        for(int j=0; j<size ; j++){
            if(arr1[i]==arr2[j]){
                int dup=0;

                for(int x=0 ; x<k; x++){
                if(arr3[x]==arr1[i]){
                    dup=1;
                break;
                }
            }
            if(dup==0){
                arr3[k]=arr1[i];
                k++;
            }
            }
        }
    }
    for(int i = 0 ; i<k ; i++){
        cout<<arr3[i]<<endl;
    }
    return 0;
}