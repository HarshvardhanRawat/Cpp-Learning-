#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5}; //arr = pointer
    
    cout<<*arr<<endl; //print's 1
    cout<<*(arr+1)<<endl; //next address , print's 2
    cout<<*(arr+2)<<endl; //next address

    return 0;
}