#include <iostream>

using namespace std;

int main() {
    int number1 = 15;        // Decimal
    int number2 = 017;       // Octal
    int number3 = 0x0F;      // Hexadecimal
    int number4 = 0b00001111; // Binary

    cout << "Decimal: " << number1 << endl;
    cout << "Octal: " << number2 << endl;
    cout << "Hexadecimal: " << number3 << endl;
    cout << "Binary: " << number4 << endl;

    // integers = occpuys 4 bytes
    int elephant_count; // variable  not declaration
    int lion_count = {}; // variable declaration and initialization to zero
    int tiger_count = 5; // variable declaration and initialization 
    float dog_count = {5.8}; // variable declaration and initialization
    int total_count = elephant_count + lion_count + tiger_count; // uninitialized variable, may contain garbage value
    cout << "Elephant count: " << elephant_count << endl; // uninitialized variable, may contain garbage value
    cout << "Lion count: " << lion_count << endl; // initialized to zero
    cout << "Tiger count: " << tiger_count << endl; // initialized to 5
    cout << "Dog count: " << dog_count << endl; // initialized to 5.8
    cout << "Total count: " << total_count << endl;
    
    // uninitialized variable, may contain garbage value

    int tatas {9756};
    int ta {-9756};
    cout << "Tatas: " << sizeof(tatas) << endl;
    cout << "Ta: " << sizeof(ta) << endl;
    
    long long lon_lon {6765};
    long long int l {6765};
    signed long long  l1 {6765};
    signed long long int l2 {6765};
    
    cout << "Lon-Lon: " << sizeof(lon_lon) << endl;
    cout << "l: " << sizeof(l) << endl;
    cout << "l1: " << sizeof(l1) << endl;
    cout << "l2: " << sizeof(l2) << endl;

    // boolean data type
    bool red_light = false;
    bool green_light = false;
    if (red_light) {
        cout << "Red light is on." << endl;
    } else {
        cout << "Red light is off." << endl;
    }
    if (green_light) {
        cout << "Green light is on." << endl;
    } else {
        cout << "Green light is off." << endl;
    }
    // sizeof operator
    cout << "Size of bool " << sizeof(bool) << " bytes" << endl;
    cout << "size of bool" << sizeof(red_light) << " bytes" << endl;
    
    // delclaare and inilatize a variable
    int r {567};
    cout << "r: " << r << endl;

    r = 569; // reassigning a value to the variable
    cout << "r: " << r << endl;

    // auto keyword
    auto a {567}; // a is an integer
    a = -675;
    cout << "a: " << a << endl;

    // variable scope and data type
    
    return 0;


}