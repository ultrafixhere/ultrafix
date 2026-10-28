#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 89;
    int mun = 89;

    if (num == mun) {
        cout << num << " and " << mun << " are equal" << endl;
    } else {
        cout << num << " and " << mun << " are not equal" << endl;
    }

    float ram = 16.5;
    int RAM = 12;

    if (ram == RAM) { // The original RAM == RAM compared RAM to itself, so was always true.
        cout << "super!" << endl;
    }

    cout << "------------------ GUESSING GAME -----------------------" << endl;

    string guess;
    cout << "Enter your guess: " << endl;
    getline(cin, guess);

    if (guess == "black panther") {
        cout << "Vibranium" << endl;
    } else if (guess == "Iron man") {
        cout << "Billionaire" << endl;
    } else if (guess == "Wanda") {
        cout << "Super woman" << endl;
    } else  {
        cout << "That's not one of the choices." << endl;
    } 
    // ################# default not used in else-if stament ##################

    // #################### number guessing game #######################
    cout << "------------------------------------------------------" << endl;
    cout << "----------------- GUESS A NUMBER----------------------" << endl;
    int number;
    cout << "please enter a number what you gueesed in u r mind:  " << endl;
    cin >> number;
    if (number >= 50) {
        cout << "----------- Congredlations you won $1000 ---------" << endl;
    }
    else if (number == 9) {
        cout << "------------- you won RTX 5040 GPU ---------------" << endl;
    }
    else {
        cout << "!!!!!!!!!!!!!!!! pleasse try next time !!!!!!!!!!!" << endl;

    } 
    //  ternary opertor
    // before going that we must go with example 
    int a;
    int c;
    cout << "Enter any Two numbers: " << endl;
    cin >> a;
    cin >> c;
    if (a > c) {
        cout << a << " is greater then " << c << endl;
    } else {
        cout << a << " is lesserh then " << c << endl;
    }
    // terminatry opator usesw ony two symbols " ? " nad " : "
    //int max = (a > c) ? a : c;
    //cout <<< " MAX is :" << endl;

    // ternary opareor best exmaple is =======
    int time = 20;
    std::string result = (time < 20) ? "you won!" : "sorry loose!!"; 
    cout << result << endl;
    // #########################   condition ? if_true : if_false     #####################################
    // a simle traffic light game
    bool red {false};
    bool green {true};
    bool yellow {false};

    if (red) {
        cout << "please STOP your vechicle " << endl;
    }
    if (yellow) {
        cout << 'go slowly please!' << endl;
    }
    if (green) {
        cout << " go " << endl;
    }
    return 0;
}