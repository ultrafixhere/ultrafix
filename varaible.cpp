#include <iostream>

using namespace std;

int main() {
    // oparetor
    int q {6};
    int w {4};
    int result = q + w;
    cout << result << endl;

    // sub
    float a {5.6};
    float b {2.3};
    float result2 = a - b;
    cout << result2 << endl;

    // modlus
    result = q % w;
    cout << result << endl;

    // presedence and associativity
    // mutiple ioperators at same time 
    //       precedence === which one first
    //       associativity === how to do
    int z {4};
    int x {2};
    int c {3};
    int v {5};
    int e {1};
    int g {7};

    int result3 = z + x * c - v / e % g;
    cout << result3 << endl;

    // increment and decrement

    int value = 6;
    cout << "value " << value << endl;
    cout << "post increment " << value++ << endl;

    cout << "value " << value << endl;
    cout << "post decrement " << value-- << endl;

    // pre increment and decrement
    float value2 = 5.6;
    cout << "value2 " << value2 << endl;
    cout << "pre increment " << ++value2 << endl;

    cout << "value2 " << value2 << endl;
    cout << "pre decrement " << --value2 << endl;

    // ########################## compund assignment operator @@@@@@@@@@@@@@@@@@@@@@@@@@
    int value3 = 3;
    value3 += 2;
    cout << "value3 added value " << value3 << endl;
    value3 -= 10;
    cout << "value3 subtracted value " << value3 << endl;
    value3 *= 2;
    cout << "value3 multiplied value " << value3 << endl;
    value3 /= 3;
    cout << "value3 divided value " << value3 << endl;
    value3 %= 5;
    cout << "value3 mod value " << value3 << endl;

    int number1 {45};
    int number2 {45};

    // realational oprators
    cout << " (number1==number2) " << (number1==number2) << endl;
    return 0;
}