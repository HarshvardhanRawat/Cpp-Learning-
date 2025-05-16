#include <iostream>
using namespace std;
int main(){
    int num[5]={4 , 10 , 50 , 30 , 40};
    int smallest=INT_MAX;

    for(int i=0 ; i<5 ; i++){
        if(num[i]<smallest){
            smallest = num[i];
        }
    }
    cout<<smallest<<endl;
return 0;
}