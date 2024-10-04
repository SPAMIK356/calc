
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    double a, b;
    wrong:
    char input;

    cout << "Input the expression (<Number> <Operator> <Number>)" << '\n';
    
    cin >> a >> input >> b;
    switch (input)
    {
    case '+':
        break;
    case '-':
        break;
    case '*':
        break;
    case '/':
        break;
    default:
        goto wrong;
        break;
    }
    
}

