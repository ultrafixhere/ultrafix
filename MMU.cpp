#include <iostream>
using namespace std;
int main() {
    // how we used pointers in last tine , now with MMU
    int number {34};

    int * p_number = &number;

    cout << endl;
    cout << "declaring pointers and assginning adderss: " << endl;
    cout << "numbner:" << number << endl;
    cout << "p_number: " << p_number << endl;
    cout << "&number: " << &number << endl;
    cout << "*p_number: " << *p_number << endl;

    int * p_number1; // u will get a junck value
    cout << "p_number1 : " << p_number1 << endl;

    // Dinamic pointer heap
    float *p_number2{nullptr};
    p_number2  = new float;
    float *p_num3{nullptr};
    p_num3 = new float;

    *p_number2  = 7.0f;
    *p_num3 = 5.7f; // trying to do multiple pointer at a time 
    *p_number2 = 56; // chaning the vlaue 

    cout << endl;
    cout << "Dynamicllly allocating memory:  " << endl;
    cout << "p-number2:  " << *p_number2 << " " <<  "*p_num3: " << *p_num3 <<  endl;
    //cout << "p-number2:  " << *p_num3 << endl;
    delete p_number2;
    p_number2 = nullptr;
          // cleaning the space with safity
    //int *p_number9 = 99;
    //cout << "p_number9 : " << *p_number9 << endl; 
    /// ### this is the wroung way to ude that pointer s
      
    int *p_number9 = new int(99);
    cout << *p_number9 << endl;
    delete p_number9;
// pointers must be alocated and cleared 
    float *p_num9{nullptr};
    p_num9 = new float(6.9);

    delete p_num9;
   // p_num9 = nullptr;
    cout << "num9: " << *p_num9 <<  endl;
    return 0;
}