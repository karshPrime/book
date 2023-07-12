#include <iostream>

int main() {
 
  return 0;
}

void auto_storage() {
  // is used by default
  // compiler decides how long a variable should be stored.
  int var1 = 12;
  auto int var2 = 123;
  // both are essentially doing same thing
}

void extern_class() {
  // tells the compiler that this variable type is global/public and should be accessible from all
  // files in the project.
  // Is useful only when the project is using more than just the main.cpp file
  extern int var1 = 321; 
}

void static_class() {
  // when a variable is defined in a function, memory is allocated for it which is freed once the
  // function's work is done. if the function is called again then for this variable memory would be
  // allocated again which again would be cleared when the function's work is done.
  //
  // by creating static type variables, the memory is not cleared until the program is closed. so if
  // a function is used where a variable was defined, then this variable would still exist even
  // after the function's work is done. if this function is called again then it wont have to
  // re-allocate new space for this var as it would be existing already.
  status int var1 = 732;
}

void register_class() {
  // normally, variables are stored in memory and are accessed by CPU when required, and once CPU is
  // done using them theyre saved back in memory.
  //
  // alternatively, if variable is required to get faster changes without being saved and loaded
  // to and from the memory, they could be stored in registers.
  //
  // this doesn't always work though, if the register is already fully occupied then the variables
  // would be stored in memory again. Additonally, pointers cant be used for variables stored in
  // registers because they dont have a memory address.
  register var1 = 321;
  
  // would ofcourse make the process faster, however this shouldn't be overused
}
