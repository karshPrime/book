#include <iostream>

class ParentClass {
    public:
        std::string public_string = "public readable n writable data";
        void hello_message() {
            std::cout << "hello world\n";
        }
    protected:
        std::string info = "secret between classes";
};

class ChildClass : public ParentClass {
    public:
        std::string public_string = "edited the content";
        ChildClass(){
            // child class is exposing the secret message
            std::cout << info << std::endl;
        }
};

class AnotherParentClass {
    public:
        int random_numbers = 324234;
        void tell_bye() {
            std::cout << "bye world" << std::endl;
        }
};

class MultipleParents : public AnotherParentClass, public ParentClass {
    public:
        int random_numbers = 6573;
};

int main(){
    ChildClass test_object;
    test_object.hello_message();
    std::cout << test_object.public_string << std::endl;
    std::cout << std::endl;

    MultipleParents text_object2;
    std::cout << text_object2.random_numbers << std::endl;
    text_object2.hello_message();
}
