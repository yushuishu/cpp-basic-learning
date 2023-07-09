#include<iostream>
#include<string>

using namespace std;

/**
类模板
*/
template<class NameType, class AgeType>
class Person {
public:
    NameType m_name;
    AgeType m_age;

    Person(NameType name, AgeType age) {
        this->m_name = name;
        this->m_age = age;
    }

    void printPerson() {
        cout << "name = " << this->m_name << "   age = " << this->m_age << endl;
    }
};


int main() {
    Person<string, int> p1("刘备", 35);
    p1.printPerson();
}