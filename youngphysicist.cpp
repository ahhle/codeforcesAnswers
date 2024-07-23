#include <iostream>

int main() {
    int num;
    // get number of vector pairs we will get
    std::cin>>num;

    // make room for each vectors sum
    int x_sum = 0, y_sum = 0, z_sum = 0;
    for (int i = 0; i < num; i++) {
        // get the vectors
        int x,y,z;
        std::cin>>x>>y>>z;

        // add each vector to its sum
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }

    // check if each vector is zero
    if (x_sum == 0 & y_sum == 0 & z_sum == 0) {
        std::cout<< "YES" <<std::endl;
    } else {
        std::cout<< "NO" <<std::endl;
    }

    return 0;
}