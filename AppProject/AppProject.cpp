// AppProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void diagnoseECG() {

}

void signUp() {

}

void logIn() {

}

int main()
{
    std::cout << "Welcome to ECG Analaysis App\n";
    std::cout << "Select your option by typing in the number;\n";
    std::cout << "1. Diagnose ECG    2. SignUp    3. LogIn\n";

    int n = 0;
    int check = 0;
    while (check == 0) {
        std::cin >> n;
        std::cout << "You chose " << n << "\n";
        if (n == 1) {
            diagnoseECG();
        }
        else if (n == 2) {
            signUp();
        }
        else if (n == 3) {
            logIn();
        }
        else {
            std::cout << "number not recognised, please try again\n";
        }
    }
    
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
