#include <iostream>
using namespace std;
int main(){
    int size=9;
    int height[size]={1,8,6,2,5,4,8,3,7};
    int maxWater=INT_MIN;

    for(int i=0; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            int l = max(height[i] , height[j]);
            int area=j-i;
            maxWater=max(maxWater, area);
        }
    }
    cout<<maxWater<<endl;
    return 0;
}