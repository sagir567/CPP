//
// Created by sagi yosef azulay on 11/03/2023.
//
#include "iostream"

using namespace std;

int main(int argc, char **argv) {

    string age;
    cout << "please enter your age";
    cin >> age;
    int nAge = stoi(age);
    while ((nAge < 1) || (nAge > 120)) {
        cout << "age is not valid! \nplease try again";
        cin >> age;
        nAge = stoi(age);
    }
    cout << "your Possibility's:\n";
    if(nAge>=14)
        cout << "you may drive an elevator alone \n";

    if(nAge >= 16)
        cout << "you can have your driving licence!!!\n";

    if(nAge>=18)
        cout << "you can buy and drink alcohol!!! \n" <<
        "you can join the army!!!";

    if(nAge >= 25)
        cout << "you should be studying!!!";

    if(nAge >= 50)
        cout << "keep up your only half way to go, you should travel and see the world";

    if(nAge >=90)
        cout << "life runs fast you should be cautious  ";







}


