#include <iostream>

// single line comment. there are additional ? ! characters for better comment vscode extension.

/*
multiline
comment 
*/


//! main function
int main() {
    //?====[ declaring variables ]===================================?
    int my_num = 183;                       // integer              size: 4 bytes
    double two_decimal = 312.34;            // 2 decimal number     size: 8 bytes
    char my_char = 'a';                     // single char          size: 4 bytes
    std::string my_str = "some words";      // string
    bool some_condition = false;            // boolean              size: 1 byte
    float my_float = 4.2345;                // float                size: 1 byte
    
    
    //?====[ Numerical Operations ]==================================?
    //! methods
    double sum = my_num + two_decimal;      // addition
    int n1 = 23, n2 = 64, n3 = 6;           // declair many vars in one line
    const float pi = 3.14;                  // this number cannot be changed now
    
    //! numbers trial
    int trial_int = 22/7;
    float trial_float = 22/7;
    double trial_double = 22/7;
    
    //! big numbers, 12e19 is same as 12 x 10^3
    float big_float = 12e93;                // will output inf
    double big_int = 12e93;                 // will output 1.2e+94

    //! return max/min number
    cout << max(5, 10);
    cout << min(5, 10);
    
    
    //?====[ Character Operations ]==================================?
    //! char
    char single_letter = 'a';               // single character
    char ascii_letter = 65;                 // capital A
    char ascii_character = 222;             // Þ character
    
    //! operations
    int add       = n1 + n2;
    int minus     = n1 - n2;
    int multiply  = n1 * n2;
    double divide = n1 / n2;
    int mod       = n1 % n2;
    
    
    //?====[ String Operations ]=====================================?
    //! append strings
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName.append(lastName);
    
    //! String Concatenation
    std::string first_name = "John ";
    std::string last_name = "Doe";
    std::string full_name = first_name + last_name;
    
    //! arrays
    std::string cars1[4];
    std::string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};
    
    //! array size
    std::string cars3[] = {"Volvo", "BMW", "Ford"};   // size of array is always 3
    std::string cars4[5] = {"Volvo", "BMW", "Ford"};  // size of array is 5, even though it's only three elements inside it
    
    
    //?====[ Text Display ]==========================================?
    std::cout << "Hello world!" << std::endl;
    printf("again hello world\n");
    std::cout << my_char << std::endl;
    std::cout << "I am " << my_num << "years old, and " << my_str << std::endl;
    std::cout << sum << "\n";

    std::cout << "trial int: " << trial_int << std::endl;
    std::cout << "trial float: " << trial_float << std::endl;
    std::cout << "trial double: " << trial_double << std::endl;

    //! print boolean
    bool isCodingFun = true;
    bool isFishTasty = false;
    std::cout << isCodingFun;  // output --> 1 (true)
    std::cout << isFishTasty;  // output --> 0 (false)


    //?====[ User input ]============================================?
    int input_number;
    std::cin >> input_number;
    std::cout << "you entered the number- " << input_number << std::endl;

    //? cin considers a space (whitespace, tabs, etc) as a terminating character, 
    //? which means that it can only display a single word (even if you type many words)
    std::string fullName;
    std::cout << "Type your full name: ";
    std::cin >> fullName;                      // input ---> John Doe
    std::cout << "Your name is: " << fullName; // output --> Your name is: John


    //?====[ Size (.length also works) ]=============================?
    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the txt string is: " << txt.size();


    //?====[ Indexing ]==============================================?
    std::string myString = "Hello";
    std::cout << myString[0];                  // output -->  H
    myString[3] = 'a';
    

    //?====[ Conditions ]============================================?
    //! if-else
    int time1 = 22;
    if (time1 < 10) {
        std::cout << "Good morning.";
    } else if (time1 < 20) {
        std::cout << "Good day.";
    } else {
        std::cout << "Good evening." << std::endl;
    }

    //! 1 line alternative if-else
    int time2 = 20;
    std::string result = (time2 < 18) ? "Good day." : "Good evening.";
    std::cout << result;

    //! case statement
    int day = 4;
    switch (day) {
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
        case 7:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "invalid day";   // basically else statement for case
    }


    //?====[ Loops ]=================================================?
    //! while loop
    int g = 0;
    while (g < 5) {
        std::cout << g << "\n";
        g++;
    }

    //! do-while loop
    int h = 0;
    do {
        std::cout << h << "\n";
        h++;
    }
    while (h < 5);

    //! for loop
    for (int i = 0; i <= 10; i = i + 2) {
    std::cout << i << "\n";
    }

    //! break- breaks the loop completly
    for (int j = 0; j < 10; j++) {
    if (j == 4) {
        break;
        }
        std::cout << j << "\n";
    }

    int k = 0;
    while (k < 10) {
        std::cout << k << "\n";
        k++;
        if (k == 4) {
            break;
        }
    } 

    //! continue- skips only the current-going loop
    for (int l = 0; l < 10; l++) {
    if (l == 4) {
        continue;
        }
        std::cout << l << "\n";
    }

    int m = 0;
    while (m < 10) {
        if (m == 4) {
            m++;
            continue;
            }
        std::cout << m << "\n";
        m++;
    }
}
