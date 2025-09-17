#include <iostream>
#include <cmath>

using namespace std;

//Functions
    void sayHi(string name) {
        cout << "Hi" << name;
    }

//Variable creation
int main() {

    sayHi("Joshua");

    string characterName = "John";
    int characterAge;
    characterAge = 35;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    //Data types creation
    char grade = 'A';
    double gpa = 2.3;
    float gpaaa = 2.3; //double is more useful, longer range of number
    bool isMale = true;

    //String functions (like methods in java)
    cout << "Giraffe Academy\n"; // same as endl;

    string phrase = "hello";
    cout << phrase.length() << endl; //length of word
    cout << phrase[0] << endl; //asks for first character
    cout << phrase.find("hello", 0) << endl;

    // Working with numbers
    int wnum = 10;
    wnum++; //adds 1 to the integer
    cout << pow(2, 5) << endl; //raised to the 5
    cout << sqrt(36) << endl;
    cout << sqrt(-1) << endl;
    cout << floor(4.8) << endl;
    cout << fmax(3, 10) << endl; 
    //returns largest integer, can use fmin too
    //other mathematic functions etc.

    //Getting user input
    string name;
    cout << "Name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << "You are " << age << " years" << endl;

    //building basic calculator
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 + num2 << endl;
    
    //Arrays
    int luckyNums[] = {5, 10, 15, 20, 25, 30}; //which are called elements
    cout << luckyNums[0];
    luckyNums[0] = 6; 
    //change the element in the array
    //int luckyNums[20]; changes the array into 20 items but of unknown elements.
    
    return 0;
}