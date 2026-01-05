
#include <iostream>


class A {
    public:
        static int s;
        A(int i);

};

A::A(int i)
{
    s = i;
};

class B : public A {
   int bar;
};


int main(void)
{
    A a;
    B b;

    a = b;

    std::cout << "A : " << sizeof(a) << std::endl;
    std::cout << "B : " << sizeof(b) << std::endl;
    return 0;
}