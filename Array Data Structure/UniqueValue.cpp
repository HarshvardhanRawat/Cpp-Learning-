//Print unique values form an array no repetition 
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,1,2};
    int num;
    
    for(int i=0 ; i<5 ; i++){
        int count=0;
        for(int j=0; j<5 ; j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    count++;
                    break;
                }
            }    
        } if(count==0){
            cout<<arr[i]<<endl;     
        }
    }
    return 0;
}