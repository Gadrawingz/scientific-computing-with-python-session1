using namespace std;
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    // Impossible for the user to input more than 6 characters
    char buffer[6];

    // If user tries to input the name with more than 6 
    // characters will result in Buffer overflow
    cout << "Enter your first name: ";
    cin >> buffer;
    cout << buffer << endl;
    return 0;

    /*
    This means that the user can potentially overwrite memory allocation 
    that is not allocated for the buffer variable leading to 
    undefined behavior depending on what your computer is doing 
    with this other memory. 

    For example: The entered name is: Bellingham,
    This will cause the program to crash or behave unpredictably.
    
    @Gad Iradufasha, after learning!
    */
}