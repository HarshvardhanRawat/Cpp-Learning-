//Find the Sum and Product of all elements of an array
#include <iostream>
using namespace std;
int main(){
    int arr[5]={5,8,9,7,6};
    int Sum = 0;
    int Product = 1;

    for(int i=0 ; i<5 ;i++){
        Sum+=arr[i];
        Product*=arr[i];
    }

    cout<<"Sum = "<<Sum<<endl;
    cout<<"Product = "<<Product<<endl;

    return 0;
}