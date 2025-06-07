#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int> &vec){
    int n = vec.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count = 0;

    for(int val : vec){
        if(val == 0){
            count0++;
        }else if(val == 1){
            count1++;
        }else{
            count2++;
        }
    }

    int idx = 0;
    for(int i = 0 ; i < count0 ; i++){
        vec[idx++] = 0;
    }
    for(int i = 0 ; i < count1 ; i++){
        vec[idx++] = 1;
    }
    for(int i = 0 ; i < count2 ; i++){
        vec[idx++] = 2;
    }
    

}

int main(){
    vector<int> num = {2,2,1,0,0,1,0,1,0,2};
    
    Sort(num) ; 

    for(int val : num){
        cout<<val<<" ";
    }
}