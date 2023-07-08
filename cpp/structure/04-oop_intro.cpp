#include <iostream>

class New_Class {                      // declaring class
    public:                            // access specifier
        int a_number;                  // attribute
        std::string a_string;          // attribute
        
        void print_message(){          // method
            std::cout << "this is a class metod" << std::endl;
        }
        
        // function in a class with same name is initialize function. type is not defined
        New_Class(string message) {
            std::cout << "New_Class is called" << std::endl;
            std::cout << message << std::endl << std::endl;
        }

        void outside_function(string message);
}; // must be ended with ;

void New_Class::outside_function(string message) {
    std::cout << "printing" << message <<" via out-of-the-class function" << std::endl;
}

int main(){
    New_Class class_object("parameter can be passed here");

    class_object.a_number = 64;
    class_object.a_string = "some text";

    std::cout << class_object.a_number << std::endl
        << class_object.a_string << std::endl;

    class_object.print_message();
    class_object.outside_function("m3$$@g3");

    return 0; 
}
