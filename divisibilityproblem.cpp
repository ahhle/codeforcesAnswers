#include <iostream>

int numOfMoves(int a, int b) {
    // check if its already div
    if (a % b == 0) {
        return 0;
    } else {
        // calculate how many do we need to make divisiable
        return b - (a % b);
    }
}

int main() {
    int cases;
    std::cin >> cases;
    
    while (cases--) {
        // get a and b
        int a, b;
        std::cin>>a>>b;
        
        // get result then print
        int result = numOfMoves(a, b);
        std::cout<<result<<std::endl;
    }
    
    return 0;
}
