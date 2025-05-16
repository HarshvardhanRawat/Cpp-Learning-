//Loop for largest number in array
#include <iostream>
using namespace std;
int main(){
    int num=INT_MIN;
    int arr[5]={9,15,25,-10,5};

    for(int i=0; i<5 ; i++){
        num = max(arr[i], num);
    }
    cout<<num<<endl;
    return 0;
}