#include <iostream>
using namespace std;

// Function to find greates common factor using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int y, w;
    cin >> y >> w;

    // Get the max roll
    int max_num = max(y, w);

    // Number of outcomes that are in Dot's favor
    int numerator = 7 - max_num; // From max_num to 6

    // Total outcomes
    int total_outcomes = 6;

    // Get greates common factor
    int common_factor = gcd(numerator, total_outcomes);

    // Output
    cout << numerator / common_factor << "/" << total_outcomes / common_factor << endl;

    return 0;
}
