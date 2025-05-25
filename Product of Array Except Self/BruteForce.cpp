#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> num={1,2,3,4};
    vector<int> ans;

    for(int i=0 ; i<num.size(); i++){
        int product=1;
        for(int j=0; j<num.size(); j++){
            if(i!=j){
                product*=num[j];
            }
        }
        ans.push_back(product);
    }
    for(int i:ans){
        cout<<i<<endl;
    }
    return 0;
}