using namespace std;

#include <iostream>

int main() {
    int x = 2147565546;
    int y = 1;
    int z = x + y;
    cout << "The value of Z: "<< z << endl;
    return 0;

    /*
    The vulnerability in the code lies in the fact that the addition 
    of X and Y can result in an integer overflow.

    Since X is already at the maximum value for assigned 32-bit
    integer, adding 1 to it, will result in a value of negative.

    >>which is: -2147401749

    Due to integer wrap-around (a facility by which a linear sequence of memory 
    locations or screen positions is treated as a continuous circular series.)

    This can cause Z to have an unexpected value leading to undefined behavior.

    FIX:
    ----
    We need to ensure that the value of X and Y do not cause an integer overflow 
    when added together or using a larger data type.

    I.E: Searching for an integer overflow vulnerability is similar to searching 
    for a buffer overflow vulnerability. 

    You can search through the code for any integer. After discovering one, 
    You the look to see if there's any way to manipulate the data that's being stored in a way that could exceed the maximum value.
    */
}