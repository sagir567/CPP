//
// Created by sagi yosef azulay on 11/03/2023.
//

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    cout << "int values:\n" << endl;
    cout << "int min value: " <<
         numeric_limits<int>::min() << endl;
    cout << "int max value: " <<
         numeric_limits<int>::max() << endl;
    cout << "unsigned short int max value: " <<
         numeric_limits<unsigned short int>::max() << endl;
    cout << "unsigned short int min value: " <<
         numeric_limits<unsigned short int>::min() << endl;
    cout << "short int max value: " <<
         numeric_limits<short int>::max() << endl;
    cout << "short int min value: " <<
         numeric_limits<short int>::min() << endl << endl;

    cout << "double values:\n" << endl;

    cout << "double min value: " <<
         numeric_limits<double>::min() << endl;
    cout << "double max value: " <<
         numeric_limits<double>::max() << endl << endl;

    cout << "float values:\n" << endl;

    cout << "float min value: " <<
         numeric_limits<float>::min() << endl;
    cout << "float max value: " <<
         numeric_limits<float>::max() << endl << endl;

    cout << "long values:\n" << endl;

    cout << "long min value: " <<
         numeric_limits<long double>::min() << endl;
    cout << "long max value: " <<
         numeric_limits<long double>::max() << endl;


}
