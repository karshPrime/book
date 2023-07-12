#include <iostream>

int main() {
  //?====[ References (basically same as bash aliases) ]===?
  std::string food1 = "Pizza";
  std::string &meal = food1;
  std::cout << food1 << "\n";    // output --> Pizza
  std::cout << meal << "\n";     // output --> Pizza
  
  //?====[ Memory addresses ]=============================?
  std::string food2 = "Pizza";
  std::cout << &food2;           // output --> 0x6dfed4
  
  //?====[ Pointers ]=====================================?
  std::string food3 = "Pizza";   // A food variable of type string
  std::string* ptr3 = &food3;    // A pointer variable, with the name ptr, that stores the address of food
  std::cout << food3 << "\n";    // Output the value of food (Pizza)
  std::cout << &food3 << "\n";   // Output the memory address of food (0x6dfed4)
  std::cout << ptr3 << "\n";     // Output the memory address of food with the pointer (0x6dfed4)
  
  //? changing ptr also changes food but location stays constant
  std::string food4 = "Pizza";
  std::string* ptr4 = &food4;
  std::cout << food4 << "\n";    // Output the value of food (Pizza)
  std::cout << &food4 << "\n";   // Output the memory address of food (0x6dfed4)
  std::cout << *ptr4 << "\n";    // Access the memory address of food and output its value (Pizza)
  *ptr4 = "Hamburger";           // Change the value of the pointer
  std::cout << *ptr4 << "\n";    // Output the new value of the pointer (Hamburger)
  std::cout << food4 << "\n";    // Output the new value of the food variable (Hamburger)
  std::cout << &food4 << "\n";   // location stays the same
  
  // pointers can be defined values during declaration, however this value would be some memory
  // address hence hex value. For example:
  // int *var2 = 232; would give an error as 232 isn't hexadecimal number, whereas-
  int *var3 = 0x234;
  // wouldn't give error as that is a hexa value.

  return 0;
}

void null_pointer() {
  int *var1 = NULL;
  // is a better way of declaring a new pointer than
  int *var2;
}

void pointer_to_array() {
  // It is legal to use array names as constant pointers, and vice versa. Therefore, 
  // *(balance + 4) is a legitimate way of accessing the data at balance[4].

  double balance[5] = {12, 4, 34, 23, 58};
  double *ptr_bal;

  ptr_bal = balance;

  // this would print all elements of the list
  for (int i = 0; i < 5; i++) {
    cout << *(ptr_bal + i) << endl;
  }
}


