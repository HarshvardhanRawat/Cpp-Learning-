//dereference = value of address
#include <iostream>
using namespace std;

int main(){
    float a = 20.99;
    float* ptr = &a;

    float** ptr1 = &ptr;

    cout<<&ptr<<endl;
    cout<<ptr1<<endl;

    cout<<*ptr<<endl; //single pointer = single dereference
    cout<<**ptr1<<endl; //double pointer = double dereference

    return 0;
}