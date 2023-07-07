#include <iostream>

void defined_and_declared() {
    std::cout << "the typical way to define functions" << std::endl;
}

// declaring function prototype; better coding practice
void declare_first1();
void declare_first2(string name, int age, bool from_army = false);
int declare_first3(int num1, int num2);

int main() {
    defined_and_declared();
    declare_first1();
    
    declare_first2("John", 21, true);
    declare_first2("Alex", 36);
    
    std::cout << "sum of 2 and 4 is: " << declare_first3(2, 4) << std::endl;
    return 0;
}

void declare_first1() {
    std::cout << "calling declared prototype" << std::endl;
}

//? parameters type is also defined. default value can be assigned if nothing is passed
void declare_first2(string name, int age, bool from_army) {
    std::cout << name << " is " << age << " old." << std::endl
    << "in army: "<< from_army << std::endl;
}

int declare_first3(int num1, int num2) {
    return num1+num2;
}
