#include <iostream>
#include <vector>
using namespace std;

int main() { 
    int cases;
    cin >> cases;

    // Count cases
    while (cases--) {
        int n; // Number of numbers in array
        cin>>n;
        vector<int> a(n); // Make a vector size n (numbers in array)

        // Read in numbers in array
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }

        int even_mismatch = 0;
        int odd__mismatch = 0;

        for (int i =0; i < n; i++) {
            if (i % 2 == 0) { // Even index
                if (a[i] % 2 != 0) { // Thats one pair that is in the wrong place
                    even_mismatch++;
                }
            } else { // Odd index
                if (a[i] % 2 == 0){ // this should be odd to match it, if its not then thats a mismatch, add one to the mismatch
                    odd__mismatch++;
                }
            }
            // the top was from ChatGBT my orginal was : if ((k % 2 != 0 && array[k] % 2 == 0) ||  (k % 2 == 0 && array[k] % 2 != 0)) which checks for both cases
            // but I really think the one GBT gave is much more readable, so ill try to make some of my code like that!
        }

        // if no mismatches, then we are good, the array does not need changes
        if (even_mismatch == 0 && odd__mismatch == 0) {
            cout<<0<<endl;
        }
        // if the mismatches match, just print how many we found that will be how many switch we need to make
        else if (even_mismatch == odd__mismatch) {
            cout<<even_mismatch<<endl;
        }
        // we have an odd number of mismatches, its not possible to make the array "good"
        else {
            cout<<-1<<endl;
        }
    }


}