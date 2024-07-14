#include <iostream>
#include <climits>

int main() {
    int n, k;
    std::cin >> n >> k; // Read number of restaurants and time available

    int max = INT_MIN; // Initialize max to a very large negative number
    
    for (int i = 0; i < n; i++) {
        int fi, ti;
        std::cin >> fi >> ti; // Read joy and time for each restaurant
        
        int happyniss;
        if (ti > k) {
            happyniss = fi - (ti - k);
        } else {
            happyniss = fi;
        }

        if (happyniss > max) { // Update max if happyniss is greater
            max = happyniss;
        }
    }

    std::cout << max << std::endl; // Output the maximum joy value

    return 0;
}
