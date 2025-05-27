//datatype of pointer and variable should be same 
// to define pointer syntax ___ "data type* name = &variable;""
#include <iostream>
using namespace std;
int main(){
    int a=0;
    int* ptr=&a;

    float b=100.24;
    float* ptr1=&b;

    cout<<&a<<endl;
    cout<<ptr<<endl;

    cout<<&b<<endl;
    cout<<ptr1<<endl;

    return 0;
}