#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;

int main() {
    cout << "##############################################" << endl;
    cout << "###      _                                  ###" << endl;
    cout << "###     /                                   ###" << endl;
    cout << "###    /                                    ###" << endl;
    cout << "###    (                                    ###" << endl;
    cout << "###                                         ###" << endl;
    cout << "##############################################" << endl;

    // desired output
    int col_width = 25;
    int row_height = 5;
    cout << setw(col_width) << left << "Hello, World!" << endl;
    cout << setw(col_width) << left << "This is a test." << endl;
    
    // design
    cout << left;
    cout << setfill('*');
    cout << setw(col_width) << "Tony Stark" << setw(col_width) << "Iron Man" << setw(col_width) << " Genius, Billionaire, Philanthropist " << endl;
    cout << setw(col_width) << "Bruce Wayne" << setw(col_width) << "Batman" << setw(col_width) << " Detective, Martial Artist, Billionaire " << endl;
    cout << setw(col_width) << "Kong" << setw(col_width) << "Monster" << setw(col_width) << " king of hello world " << endl;
    cout << setw(col_width) << "Goku" << setw(col_width) << "Saiyan" << setw(col_width) << " Super Saiyan, Martial Artist, Hero " << endl;
    cout << setw(col_width) << "Naruto" << setw(col_width) << "Ninja" << setw(col_width) << " Hokage, Ninja, Hero " << endl;
    cout << setw(col_width) << "Luffy" << setw(col_width) << "Pirate" << setw(col_width) << " Captain, Pirate, Hero " << endl;   
    
    cout << setfill(' '); // Reset fill character to space
    cout << setw(row_height) << "End of Output" << endl;
    cout << setw(row_height) << "Thank you!" << endl;
    
    // limits 
    cout << "Maximum value for int: " << numeric_limits<int>::max() << endl;
    cout << "Minimum value for int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum value for double: " << numeric_limits<double>::max() << endl;
    cout << "Minimum value for double: " << numeric_limits<double>::min() << endl;
    cout << "Max value for char: " << static_cast<int>(numeric_limits<char>::max()) << endl;
    cout << "Min value for char: " << static_cast<int>(numeric_limits<char>::min()) << endl;
    cout << "max for float: " << numeric_limits<float>::max() << endl;
    cout << "min for float: " << numeric_limits<float>::min() << endl;

    // ################################ maths functins ##########################
    double floor = 3.9;
    cout << "Floor of  " << floor << " is: " << std::floor(floor) << endl; 
    
    // ceil
    int weight = 609.987;
    cout << "weght is " << weight << " is " << std::ceil(weight) << endl;

    // power
    
    cout << "power of is : " << std::pow(9, 2) << endl;
    cout << "power of is : " << std::pow(9, 6) << endl;
    // absulate as abs
    //float savings {60000.98}
    //cout << "My savings is : " << std::abs(savings) << endl;
    
    // logrethamic function
    cout << " log of 100 is : " << std::log10(100) << endl;
    cout << " log of 9 id : " << std::log10(9) << endl;
    cout << " log of 2 id : " << std::log10(2) << endl;
    // sqare root function
    cout << " square of 100 is: " << std::sqrt(100) << endl;
    cout << " square of 76876 is: " << std::sqrt(76876) << endl;
    // round function
    cout << " round of 99 is: " << std::round(99.2) << endl;
    cout << " round of 7.91 is : " << std::round(7.91) << endl;
    
    return 0;
}