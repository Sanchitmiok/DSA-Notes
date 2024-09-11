#include <iostream>
#include <cmath>

int main() {
    double param = 25;
    double result = log10(param) / 2;
    std::cout<<result;
    std::cout << "log(" << param << ") = " << pow(10 , result) << std::endl;
    return 0;
}
