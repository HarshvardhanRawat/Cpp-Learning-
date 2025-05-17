//print unique value with one loop for one unique value  
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec={4,1,2,1,2};
    int ans=0;

    for(int val: vec){
        ans=ans^val;
    }
    cout<<ans<<endl;
    return 0;
}