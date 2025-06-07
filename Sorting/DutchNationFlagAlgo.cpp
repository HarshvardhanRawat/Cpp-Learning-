#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int> &vec){
    int n = vec.size();
    int low = 0 ; int high = n-1 ; int mid = 0;
    
    while(mid <= high){
        if(vec[mid] == 0){
            swap(vec[low] , vec[mid]);
            low ++; 
            mid ++;
        }else if(vec[mid] == 1){
            mid ++ ;
        }else{
            swap(vec[high] , vec[mid]);
            high -- ;
        }
    }
}

int main(){
    vector<int> num = {2,2,1,0,0,1,0,1,0,2};
    
    Sort(num) ; 

    for(int val : num){
        cout<<val<<" ";
    }
}