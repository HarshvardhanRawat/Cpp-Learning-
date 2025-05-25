#include <iostream>
using namespace std;
int main(){
    int height[9]={1,8,6,2,5,4,8,3,7};
    int maxWater=0;
    int lp=0;
    int rp=8;
    
    while(lp<rp){
        int w=rp-lp;
        int ht=min(height[rp],height[lp]);
        int area=w*ht;
        maxWater=max(maxWater,area);
        height[lp]<height[rp]?lp++:rp--;
    }
    cout<<maxWater<<endl;
    return 0;
}