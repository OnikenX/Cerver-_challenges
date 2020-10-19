
#include <string>
#include <iostream>

class A
{
    int i = 10;
    std::string t = "texto sei lá.";
    char k = 'k';

public:
    int getI() const{return i;}
    std::string getT() const{return t;}
    char getK() const{return k;}
};

std::ostream &operator<<(std::ostream &os, const A &a)
{
    return os << a.getI() << " " << a.getT() << " " << a.getK();
}

int main()
{
    A a;
    std::cout << a;
}
