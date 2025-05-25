#include <iostream>
#include <vector>
using namespace std;
vector<int> main(){
    vector<int> num={1,2,3,4};
    vector<int> prefix;
    vector<int> suffix;
    vector<int> ans;
    int lp=1;
    int rp=1;

    for(int i=1; i<num.size(); i++){
        prefix[i]=prefix[i-1]*num[i-1];
    }
    for(int i=num.size()-2 ; i>=0 ; i--){
        suffix[i]=suffix[i+1]*num[i+1];
    }
    for(int i=0; i<num.size(); i++){
        ans[i]=suffix[i]*prefix[i];
    }

    return ans;
}