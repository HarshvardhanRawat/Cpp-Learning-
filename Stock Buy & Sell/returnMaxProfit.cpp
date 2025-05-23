#include <iostream>
using namespace std;

int main(){
    int n=6;
    int price[6]={7,1,5,3,6,4};
    int bestBuy;
    int maxProfit=0;

    for(int i = 0 ; i<n ; i++){
        if(price[i]>bestBuy){
            maxProfit = max(maxProfit , price[i]-bestBuy);
        }
            bestBuy = min(price[i] , bestBuy);
        }
    cout<<"bestBuy = "<<bestBuy<<endl;
    cout<<"maxProfit = "<<maxProfit<<endl;
    return 0;
}