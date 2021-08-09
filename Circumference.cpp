Circumference
#include <iostream>

int main() {
    double pi, diameter, circumference; 
    pi = 3.14;
    std::cout << "Enter the diameter of the circle";
    std::cin >> diameter;
    circumference = pi * diameter;
    std::cout << "The circumference of the circle is " << circumference << "\n";
}