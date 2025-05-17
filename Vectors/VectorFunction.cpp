#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <char> vec = {'a','b','c','d'};
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back('e');
    cout<<"after push back size = "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"after pop back size = "<<vec.size()<<endl;
    cout<<"front value = "<<vec.front()<<endl;
    cout<<"back value = "<<vec.back()<<endl;
    cout<<"value at 1 = "<<vec.at(1)<<endl;

    return 0;
}