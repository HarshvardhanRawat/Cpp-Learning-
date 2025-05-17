#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>&vec ,int size){

    for(int i=0 ; i<size/2 ; i++){
        swap(vec[i],vec[size-i-1]);
    }
}

int main(){
    vector<int>vec={2,4,6,8,10};
    int size;

    size = vec.size();
    reverseVector(vec , size);

    for(int i: vec){
        cout<<i<<endl;
    }
    return 0;
}