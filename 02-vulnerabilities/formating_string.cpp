using namespace std;

#include <iostream>

int main() {

    // Character array that can hold 100 characters
    char input[100];

    // Ask the user to input their name:
    cout << "Enter your name: ";

    // Accept the user's name and store it into input
    cin >> input;

    // Print out the user's name
    // Here some operations are needed
    printf(input);
    return 0;

    /*
    The vulnerability in this code lies in the fact that the input variable 
    is passed directly to the C.Out statement without any format string 
    validation.

    Problem is this:
    ----------------
    An attacker can exploit this vulnerability by entering a malicious input 
    that includes format strings specifiers such as percentage X, 
    percentage P, or percentage N

    These specifiers can cause the program to print out arbitrary memory 
    addresses or execute arbitrary code leading to security issues such 
    as information disclosure or remote code execution.

    EXAMPLE:
    --------
    if i enter : Gad%p%p%p, then we can receive the valuable information 
    about the memory that is allocated to this program. This vulnerability. 
    is a bit more abstract and advanced than the previous vulnerability.

    But we'll still go over why it matters and what an attacker could do by 
    exploiting it, anf by controlling what is being printed out.

    An attacker could output the contents of the memory stack, this 
    could potentially contain sensitive information, or the execution of 
    malicious code controlled by the attacker.

    To search for this vulnerability
    --------------------------------
    We could trace through the user input as a C++ program and identify any 
    areas where the input is getting stored in a character array without 
    any sort of validation.
    */
}