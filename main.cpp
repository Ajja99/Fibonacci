#include <iostream>
#include <math.h>

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    long long int valFibonacci;
    double fi = (1 + sqrt(5)) / 2;
    double sigma = (1 - sqrt(5))/2;

    valFibonacci = (pow(fi, n) - pow(sigma, n))/(fi-sigma);

    std::cout << "the " << n << " fibonacci number is: " << valFibonacci << std::endl;
    return 0;
}