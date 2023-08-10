// AppProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>


std::wstring ExePath() {
    TCHAR buffer[MAX_PATH] = { 0 };
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    return std::wstring(buffer).substr(0, pos);
}

void diagnoseECG() {
    system("cls");
    std::cout << "Diagnose ECG\n";
    std::wstring epath = ExePath();
    std::wcout << "Your directory is " << epath << "\n";
    std::cout << "Please provide the address of your ECG png\n";
    std::cout << "\nType '...' to return\n";

    std::string n = " ";
    std::cin >> n;
    if (n == "...") {
        system("cls");
        return;
    }
}

void signUp() {
    system("cls");
    std::cout << "Sign Up\n";

    std::cout << "\nType '...' to return\n";
    std::string n = " ";
    std::cin >> n;
    if (n == "...") {
        system("cls");
        return;
    }
}

void logIn() {
    system("cls");
    std::cout << "Login\n";

    std::cout << "\nType '...' to return\n";
    std::string n = " ";
    std::cin >> n;
    if (n == "...") {
        system("cls");
        return;
    }
}


int main()
{
    while (true) {
        std::cout << "Welcome to ECG Analaysis App\n";
        std::cout << "Select your option by typing in the number;\n";
        std::cout << "1. Diagnose ECG    2. SignUp    3. LogIn\n";

        std::string n = "";
        std::cin >> n;
        std::cout << "You chose " << n << "\n";
        if (n == "1") {
            diagnoseECG();
        }
        else if (n == "2") {
            signUp();
        }
        else if (n == "3") {
            logIn();
        }
        else {

            std::cout << "\nInput number not recognised, please try again...\n\n";
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
