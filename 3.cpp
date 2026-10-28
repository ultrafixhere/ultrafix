#include <iostream>
int addnumbers(int first, int second) {
    return first + second;
}
int multnumbers(int first, int sceond) {
    return first * sceond;
}
int main () {
    float value = 5.0 / 4.0;
    std::cout << value << std::endl;
    // statement and functions
    int x = 4;
    int r = 5;

    std::cout << "x: " << x << std::endl;
    std::cout << "r: " << r << std::endl;
    int sum = x * r;
    std::cout << "sum: " << sum << std::endl;

    int sum2 = addnumbers(45, 56);
    std::cout << " sum2: " << sum2 << std::endl;
    // cicle
    int t, circle;
    std::cout << "enter radius: ";
    std::cin >> t;
    circle = 3.14 * t * t;
    std::cout << "circle: " << circle << std::endl;

    sum = addnumbers(3456, 8665);
    std::cout << "sum3" << sum << std::endl;

    int mul = multnumbers(2, 4);
    std::cout << "mul: " << mul << std::endl;
    int age1;
    std::string name;
    std::cout << "enter your age and name: " << std::endl;
    std::cin >> age1 >> name;
    std::cout << "your age is " << age1 << " and yourname is " << name << std::endl;
    print("###### game ######## ")
    

    return 0;
}