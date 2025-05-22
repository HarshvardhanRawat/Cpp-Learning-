#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(int arr[], int target){
    vector<int> ans;

    for(int i=0 ; i<4 ; i++){
        for(int j=i; j<4 ;j++){
            if((arr[i]+arr[j])==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    int arr[4]={2,7,11,15};
    int target=9;
    vector<int> ans;

    ans=twoSum(arr , target);
    cout<<ans[0]<<','<<ans[1]<<endl;
    
    return 0;
}