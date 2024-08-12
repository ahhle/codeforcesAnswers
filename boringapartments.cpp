#include <iostream>
#include <math.h>

// This function calculates the total number of key presses required for all boring apartments
// with a specific number of digits. The result is the sum of the first `length` natural numbers.
// (e.g.) say someone called on 22 that would be 10 * (2 - 1) + (sum of first length 'natural number') = 13

int totalKeyPressesForLength(int length) {
    if (length == 1)
    {
        return 1;
    } 
    else if (length == 2)
    {
        return 3;
    }
    else if (length == 3)
    {
        return 6;
    }
    else if (length == 4)
    {
        return 10;
    } 
}


// Found this formula that this more efficient and general
// int totalKeyPressesForLength(int length) {
//     return length * (length + 1) / 2;
// }

int main() {
    int cases;
    std::cin>>cases;

    for (int i = 0; i < cases; i++) {
        int caller = 0;
        // Read the apartment number where the resident answered the call
        std::cin>>caller;
        
        // Get number of digits in number
        int length = std::to_string(caller).length();

        // Get first digit of apartment number
        int firstDigit = caller / pow(10, floor(log10(caller)));

        // Get total key presses required up to and including the apartment number caller
        if (firstDigit == 1)
        {
            // If the first digit is 1, only the key presses for this length need to be considered
            std::cout<<totalKeyPressesForLength(length)<<std::endl;
        }
        else 
        {
            // This is the formaula i mentioned in the beginning
            std::cout<< 10 * (firstDigit - 1) + totalKeyPressesForLength(std::to_string(caller).length())<<std::endl;
        }
    }
    return 0;
}