#include <iostream>

//! access specifier
/*  define how the members (attributes and methods) of a class can be accessed. 
    In the example above, the members are public - which means that they can be accessed 
    and modified from outside the code. 

public
members are accessible from outside the class

private
members cannot be accessed (or viewed) from outside the class

protected
members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
*/

class Employee {
    private:
        int salary;

    public:
        std::string name;
        void set_salary(int s) {
            salary = s;
        }

        int get_salary() {
            return salary;
        }

    protected:
        std::string protected_string;
        int protected_int;

};

int main(){
    Employee test_object;
    //* will work without error
    test_object.name = "something";
    test_object.set_salary(5341);   // using public method to get private info
    std::cout << test_object.get_salary() << std::endl;

    //* will give error
    // test_object.salary = 3424;
    // std::cout << test_object.salary << std::endl;
    // test_object.protected_string = "trial text";
    // test_object.protected_int = 756;

    return 0;
}

//! Encapsulation
/* to make sure that "sensitive" data is hidden from users.
  - It is considered good practice to declare your class attributes as private (as often as you can).
    Encapsulation ensures better control of your data, because you (or others) can change one part of
    the code without affecting other parts
  - Increased security of data
*/
