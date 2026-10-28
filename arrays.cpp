 #include <iostream>

using namespace std;

int main() {
    // Declaring and Initialtion:
    //int scores[5];
    //cout << "scores: " << scores << endl;

    int scores[5] = {2, 4, 5, 7, 7};
    // sum of arrya , stored arrays in sum
    float items[] {2.0, 8.9, 8.6, 5.7};
    float sum;
    //float elemants : items) {
        //sum += elemants;
    //}
    //float sum += elemants : items;
    cout << "items sum: " << sum << endl;
    cout << "scores: " << scores[0] << endl;
    
    //cout << "items sum: " << sum << endl;
    //class test nmmbers
    int x, y, z;
    cout << "Enter x , y , z values: " << endl;
    cin >> x >> y >> z;
    // finding greatest of all thtee numbers
    //x > y ? ((x > z ? cout << x << " is greatest of all three numbers " << endl) : (cout << z << " is greatest of all three numbers " << endl ) : y > z ? (cout << y << " is greatest of all three numbers " << endl ) : (cout << z << " is greatest of all three numbers "));
    int greatest = x;
    if (y > greatest) greatest = y;
    if (z  > greatest) greatest = z;
    cout << greatest << " is greaterst of all three numnbers" << endl;

    // arrays missing topics .....................??????????

    // array characters
    char message [5] {'h', 'e', 'l', 'l', 'o'};
    cout << "message " << message << endl;
    // print out array througn looping
    //for ( auto c : message) {
      //  cout << c;
    //}
    // change the char by indexing 
    message[3] = 'r';
    cout << "New_message: " << message << endl;
    message[3] = 'g';
    cout << "New_message1: " << message << endl;
    // size of char arrays
    cout <<" size of char arrayz: " << sizeof(message)  << endl;
    cout <<" size of char arrayz: " << sizeof(message)  << endl;
    char message2[] {"hello world"};
    cout << " size of char array: " << sizeof(message2) << endl;
    // ###             bound of arrays
    int numbers[] {0, 1, 2, 3 ,4, 5, 6, 7, 8, 8, 9};
    cout << "numbers[12]" << numbers[12] << endl;
    cout << "numbers[12]" << numbers[1] << endl;
    // #   pointers                  
    // ## see pointers are to find memory addersss of data
    // there are two types of pointers 1. & is used for to find memory adderrss of varable data
    //                                 2. * is used for to find what is thier in that memory adderess
    // exaple 
    float player_health = 198.9;
    float* health_ptr = &player_health;
    cout << " &player_health  : " << &player_health  << endl; // it shoes adderss od that data
    // now dereferance opertor *
    cout << " value using pointer (*helth_ptr) "  << *health_ptr << endl; // it shows value 
    int* ptr = numbers;
    cout << "fiirst item of the array : " << numbers[0] << endl;
    // we change the pointer adderess
    //int orig {4556};
    //p_int = &orig;
    //cout << " change pointer adderess: " << p_int << endl;
    // null pointer 
    int* helath_ptr = nullptr;
    cout << "helath "<< helath_ptr << endl;

    //         ########## char pointers $$$$$$$$$$$$$
    const char * netflix {"Entertienment"};
    cout << "netflix : " << netflix << endl;
    // allow user to modify the string
    char netflix1[] = "Prime video";
    netflix1[0] = 'g';
    cout << "netflix1: " << netflix1 << endl;
    netflix1[0] = 'r';
    cout << "netflix1: " << netflix1 << endl;
    

    
    return 0;
}