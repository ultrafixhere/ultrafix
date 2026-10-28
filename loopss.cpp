#include <iostream>

using namespace std;

int main() {
    // #####################  FOR loop ########################### used for repetaive tasks
    //                         Pliers for loops : Iterators
    //                                            starting point
    //                                            Test ( controls when loop stops)
    //                                            Increment or decremnet
    //                                            loop body
    // i = means initilation, if condition is true loop runs contunesly when loop becomes false it stops running
    // i++ or ++i incremnet or decremnt
    // { } = loop body
    for (int i = 0; i < 9; i++) {
        cout << " Tony stark" << i <<  endl;
    }
    cout << " loop done! " << endl;
    for (int i =0; i < 10; i++) {
        cout << " NUmber: " << i << endl;
    }
    // #            guess the screet number 
    int use_guess;
    cout << "-----------------------------------";
    cout << "___ Guess the secret number _______";
    cout << "-----------------------------------";
    
    int secret_number = 9;
    int user_guess;
    bool has_won = false;
    for (int i = 0; i < 10; i++) {
        cout << "Enter that secret number: " << endl;
        cin >> use_guess;
        
        if (use_guess == secret_number) {
            cout << "####### CONGREGS you won RTX 5090 ########" << endl;
            has_won = true;
            break;
        }
        else {
            cout << "Try again ! later" << endl;
        }
    }
    // player health game ######################
    /*cout << "******* Player health game *******" <<  endl;
    int enemy = 200;

    while (enemy > 0) {
        cout << "welcome to the game ! : " << endl;
        //cin >> player;
        enemy -= 20;
        
    }*/

    // ########### DO while loop $$$$$$$$$$$$$$$$$$
    // first it do , then it checks out
    const int COUNT {11};
    size_t i {1};

    do{
        cout << i << " : I love C++ " << endl;
        ++i;

    }while(i > COUNT);

    // while loop ###### different gronn for loop######### 


    return 0;
}