//linear search in single function 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec={2,4,6,8};
    int target=4;
    int index=0;

    for(int val : vec){
        if(val==target){
            cout<<index<<endl;
            break;
        }
        index++;
    }   
    return 0;
}