#include <iostream>

void swap_nums(int &x, int &y) {
    x = y + x;
    y = x - y;
    x -= y;
}

//?====[ referencing ]====================================?
void referencing() {
    int first_num = 10;
    int second_num = 20;

    std::cout << "Before swap " << std::endl
        << "first number: " << first_num << std::endl
        << "second number: " << second_num << std::endl;

    // Call the function, which will change the values 
    // of first_num and second_num
    swap_nums(first_num, second_num);

    std::cout << "After swap: " << std::endl
        << "first number: " << first_num << std::endl
        << "second number: " << second_num << std::endl;
}

//?====[ overloading ]====================================?
//! basically 2 functions can exist of same name if they 
//! have different parameters, eg:

double twin_function(double x, double y) {
    return x + y;
}

int twin_function(int x, int y) {
    return x + y;
}

void overloading() {
    double output1 = twin_function(1.324, 4.3222);
    int output2 = twin_function(1.324, 4.3222);
    std::cout << "double output: " << output1 << std::endl
        << "int output: " << output2 << std::endl;
}

int main() {
    referencing();
    std::cout << std::endl;
    overloading();
    return 0;
}
