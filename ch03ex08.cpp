#include <iostream>
#include "ch03ex08.h"

using namespace ch03ex08;
using namespace std;

int main() {
    Print("Input: ");
    int input = Scanner::getInt();
    Print("The input is ");
    if (IsEven(input))
        PrintLn("even.");
    else
        PrintLn("odd.");
    return 0;
}

//  Prints the string without an ending newline.
void ch03ex08::Print(const string& string) {
    cout << string;
}

//  Prints the string with a newline at the end.
void ch03ex08::PrintLn(const string& string) {
    cout << string << endl;
}

//  Returns true if the number is even.
bool ch03ex08::IsEven(const int n) {
    return n % 2 == 0;
}

//  Gets and int from cin.
int Scanner::getInt() {
    int i;
    cin >> i;
    return i;
}
