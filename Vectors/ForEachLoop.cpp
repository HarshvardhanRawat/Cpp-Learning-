#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {2,4,6};

    for(int val : vec){  //here val stores the value of that index in that vector
    cout<<val<<endl;
    }
    return 0;
}