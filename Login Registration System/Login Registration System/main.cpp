#include <iostream>
using namespace std;

void logMessage(std::string msg) {
    std::cout << msg << std::endl;
}

int validateInput(int min, int max) {
    int input; //variable for input
    cin >> input; //gains user input
    while(cin.fail() || input > max || input < min ) {
        logMessage("Invalid. Please enter a number");
        cin.clear(); //clear bad input flag
        cin.ignore(INT_MAX, '\n'); //ignore input
        cin >> input; //get input again
    }
    return input;
}

int main(int argc, const char * argv[]) {
    logMessage("Please enter one of the following options:\n1. Login\n2. Register");
    int input = validateInput(1, 2);
    return 0;
}

