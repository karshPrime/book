#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <array>

// using declaration
using std::cout, std::endl, std::cin, std::string, std::vector, std::array;

// for function declaration, argumrent names are not required. example:
void func_w_arguments(double, int);


int main() {
  cout << "some text; trial" << "\n";
  return 0;
}

void variable_info() {
  int number_variable = 5;
  int same_numb_var = number_variable;
  number_variable = 12;

  cout << same_numb_var << endl;		// would return 5 and not 12
}

void func_w_arguments(double some, int num) {
  cout << some << " " << num << endl;
}

void user_input() {
  // storing user input in string
  string str_var2;
  cin >> str_var2;
  // here only the first word be recorded, as in everything after first space would be ignored
  // it is because cin only looks for one word, otherwords are still waiting to be stored somewhere, so using another variable, like:
  string str_var2a;
  cin >> str_var2a; // this would store the second word that was entered in the first time (if more than one words were entered)

  // wordaround:
  getline(cin, str_var2);
  // this would store everything that the user enters in one variable

  // to clear the stuff stored in cin
  cin.ignore(10000000, '\n');

  // this would remove 10000000 chars from the cin until new line
  // alternate way:
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  // must #include <limits> to make this work though
}

void number_stuff() {
  cout << 5 / 2 << endl;
  cout << 22.0 / 7 << endl;
  cout << endl;

  int trial_var = 11.0 / 7;
  cout << trial_var << endl;

  double new_var = 11.0 / 7;
  cout << new_var << endl;

  float new_var2 = 11.0 / 7;
  cout << new_var2 << endl;
}

void integral_datatypes() {
  // can be both positive and negative; has lower max value
  short a;      // 16 bits
  int b;        // 32 bits
  long c;       // 64 bits
  long long d;  // 64 bits

  // only positivel; has higher max value
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  cout << "size of short is: " << sizeof(short) << endl; // 16 bits (2 bytes)

}

void char_datatype() {
  char single_letter = 'a'; // single quotes are used for char, double are used for string
  cout << single_letter << endl;

  char int_data = 65;
  cout << int_data << endl;       // would print ASCII value of int_data which is A
  cout << (int)int_data << endl;  // would print 65
}

void escape_sequence() {
  // new line
  cout << "\n";

  // tab
  cout << "word1\tword2" << endl;

  // backspace a char
  cout << "word1\b" << endl; // would print "word"
}

void bool_datatype() {
  bool bool_var1 = true;

  bool bool_var2 = 0; // 0 is false and all other numbers (including negative) stand for true
  cout << bool_var2 << endl; // would output 0
  cout << std::boolalpha << bool_var2 << endl; // would output false

  bool bool_var3 = -123;
  cout << bool_var3 << endl; // would output 1
  cout << std::boolalpha << bool_var3 << endl;
}

void float_datatype() {
  // are stored as signifinant digits with a multiplier
  // can store big numbers; however, bigger numbers may not be exact
  float a;        // least trustworthy, highest difference between stored and actual number (6 non-changed digits)
  double b;       // 15 non-changed digits [recommended]
  long double c;  // 18 non-changed digits
}

void constant_const() {
  // creates read-only variable
  const int CONST_VAR = 5;
  // style convention- use capital identifier

  enum { CONST_VAR2 = 100 };

  // after all include and using statements at the starting of the file, enter:
  // #define CONST_VAR3 10;
  // this is how constants are declared in C language, however they also work here; not commonly used though

  // this would auto assign datatype based on the constant
  auto x = 5U;

}

void numeric_function() {
#include <cmath>
  cout << sqrt(25) << endl;       // would print 5
  cout << sqrt(125) << endl;      // would print 'nan'- not a number
  cout << pow(25, 900) << endl;   // would print inf

  cout << remainder(10, 3) << endl; // same as 10 % 3, however it also supports decimal values

  cout << fmax(123, 32) << endl; // would print 123; only accepts 2 arguments

  cout << ceil(1.25) << endl;   // would return 2
  cout << trunc(1.25) << endl;  // would return 1
  cout << floor(1.25) << endl;  // would return 1

  cout << ceil(-1.25) << endl;  // would return -1
  cout << trunc(-1.25) << endl; // would return -1
  cout << floor(-1.25) << endl; // would return -2

}

void number_base() {
  int base_10 = 21341; // default base
  int base_16 = 0x234; 
  int base_08 = 024;

  cout << std::hex << base_10 << endl;
  cout << std::oct << base_16 << endl;
}

void string_datatype() {
  // start by #include <string> and using std::string
  string str_var = "hello world";

  // default value of string is empty string

  // string functions- length
  cout << str_var.length() << endl;

  string str_var2 = "some text";
  // string methods (change the given string)
  str_var2 += " more text";           // string append
  str_var2.insert(3, "       ");      // (index, string to add)
  str_var2.erase(3, 1);               // (index, char to remove), if char-to-remove is not mentioned then everythin after the said index would be removed
  str_var2.pop_back();                // remove the last character
  str_var2.replace(0, 2, "new_text"); // (start index, end index, thing to add)

  // return info without affecting the string
  int text_index = str_var2.find("text");     // would return starting index for the passed string
  string sliced_var = str_var2.substr(2, 4);  // string slicing 
  str_var2.find_first_of("aeiou");            // would look for any char from the passed vovels and return its index
}

void control_flow() {
  // branching  - branch appliation to do different things based on the result

  // if statements
  // when find_first_of is not found then instead of false it returns unsigned value of -1
  string str_to_check = "some words in a random sentence";
  if (str_to_check.find_first_of("z") == -1) cout << "letter not found" << endl;

  int if_var;
  cin >> if_var;
  if (5 > if_var) {
    cout << "given number is smaller than 5" << endl;
  }
  else if (5 < if_var) {
    cout << "givem mumber is bigger than 5" << endl;
  }
  else {
    cout << "given number is 5" << endl;
  }

  // switch
  int switch_var;
  cin >> switch_var;
  switch (switch_var) { // switch_var can only be on numerical datatype
  case 17:
    cout << "age is 17" << endl;
    break;
  case 18:
    cout << "age is 18" << endl;
    break;
  default:      // basically else statements
    cout << "age is over 18" << endl;
    break;
  }

  enum class Season { summer, winter, spring, fall };
  Season now = Season::winter;
  switch (now) {
  case Season::summer:
    break;
  case Season::spring:
    break;
  case Season::fall:
    break;
  case Season::winter:
    cout << "its cold" << endl;
    break;
  }


  // looping    - repeat same thing again and again

  // while loop: the code would execute only when the condition is matched
  // do while loop: loop code would be executed once before looping with condition
  // for loop- functionality is essentially the same as for loop


  string loop_var = "Hello World!";
  for (int i; i < loop_var.size(); i++) {
    // loop will skip space from output
    if (loop_var[i] == ' ') {
      continue;
    }
    // loop will stop when index is at W
    else if (loop_var[i] == 'W') {
      break;
    }
    cout << loop_var[i];
  }



}

// important
void conditional_operator() {
  int answer = 11;
  cout << "Guess the number: ";
  int guess;
  cin >> guess;

  int points = guess == answer ? 10 : 0;

  cout << points << endl;

  // or
  // int points = guess == answer ? cout << "correct answer" : cout << "wrong answer";
}

void vector_function_example(vector<int>);

void vector_array() {
  // array (static size- must be defined during compiling)
  // creating array with hardcoded data
  int known_array[] = { 12, 32, 234, 345 };
  int known_array_size = sizeof(known_array) / sizeof(known_array[0]);
  // this takes total size of the array in bytes and divides that by size of each element in that list
  // above [] were not used after known_array because [] are used only while defining an array

  // vector (dynamic size- can be defined even during execution)
  // #include <vector> and using std::vector is required
  vector<int> vector_var1 = { 1, 2, 3 };
  vector_var1.push_back(12); // appending at the end
  cout << vector_var1[3] << endl;   // to print element at certain index
  cout << vector_var1[vector_var1.size() - 1] << endl;    // to print last element of the list
  // vector methods
  cout << vector_var1.back() << endl;        // would print last element
  cout << vector_var1.front() << endl;       // would print the first element
  // vector modifiers
  vector_var1.pop_back();           // removes the last element


  // templatized array- cleaner and easier to use array that have certain features from vector (including size)
  // preffered to use when the list size is known
  // to get started, #include <array> and using std::array

  array<int, 20> array_var1 = { 1, 2, 3, 4 };
  // array_var1 has initial values as 1, 2 ,3 and 4 but after that, by default all remaining elements are 0
}

void vector_function_example(vector<int> &data) {
  // because of adding & before data identifier above, changes made to the vector in this function would be made to the vector passed to the function
  data.pop_back();
}
