
#include <iostream>


class Animal {
    public:
        virtual void x() {
            std::cout << "Animal Sound..." << std::endl;
        }
};

class Dog : public Animal {
    public:
        void x() {
            std::cout << "Woof!" << std::endl;
        }
};

class Cat : public Animal {
    public:
        void x() {
            std::cout << "Meow!" << std::endl;
        }
};

int main()
{
    Animal *p = new Cat;

    p->x();
}

