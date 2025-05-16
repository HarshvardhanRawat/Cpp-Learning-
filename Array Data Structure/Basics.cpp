#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];
    
    for(int i=0 ; i<size ; i++){
        cout<<"Enter "<<(i+1)<<" Number:"<<endl;
        cin>>marks[i];
    }
    
    cout<<endl;

    for(int i=0 ; i<size ; i++){
        cout<<"You entered "<<(i+1)<<":"<<marks[i]<<endl;
    }

 return 0;   
}