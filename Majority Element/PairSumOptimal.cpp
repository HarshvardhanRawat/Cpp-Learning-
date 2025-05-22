#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=4;
    int arr[n]={2,7,11,15};
    vector<int> ans;
    int target=22;
    int i=0;
    int j=n-1;
    
    while(i<j){
        if((arr[i]+arr[j])>target){
            j--;
        }
        else if((arr[i]+arr[j]<target)){
            i++;
        }
        else{
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        break;
        }
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}
