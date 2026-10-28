#include <iostream>

using namespace std;

int main() {
    int number1 {45};
    int number2 {90};

    // realational oprators
    cout << " (number1==number2) " << (number1==number2) << endl;
    cout << " (number1>=number2) " << (number1>=number2) << endl;
    cout << " (number1<=number2) " << (number1<=number2) << endl;
    cout << " (number1!=number2) " << (number1!=number2) << endl;
    cout << " (number1>number2) " << (number1>number2) << endl;
    cout << " (number1<number2) " << (number1<number2) << endl;
    
    // AND, OR, NOT
    bool l {true};
    bool m {true};
    bool o {false};

    cout << "AND, && " << (l && m) << endl;
    cout << "OR , || " << (m || o) << endl;
    cout << "NOT " << (l != m)  << endl;

    //  ############ we can use mulitple realtional opertor at all same time ###########
    return 0;

}