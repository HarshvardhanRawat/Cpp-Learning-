#include <iostream> 
using namespace std; 

int main() { 
    float a;
    float b;
    char c;
    float R;

    cout << "Input first number: ";
    cin >> a;

    cout << "Input second number: ";
    cin >> b;

    cout << "Input Operation: ";
    cin >> c; 

    if (c=='+')
    R = a+b;

    else if (c=='-')
    R = a-b; 

    else if (c=='*')
    R = a*b; 

    else if (c=='/')
    R = a/b;

    cout << "Result: " << a << " " << c << " " << b << " = " << R << endl; 
        
    return 0; 
}


