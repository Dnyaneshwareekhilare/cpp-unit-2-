// Concept 4: Multilevel Inheritance (Person -> Employee -> Manager)
#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name;

public:
    explicit Person(std::string personName) : name(std::move(personName)) {}

    void showPerson() const {
        std::cout << "Name: " << name << '\n';
    }
};

class Employee : public Person {
protected:
    int employeeId;

public:
    Employee(std::string employeeName, int id)
        : Person(std::move(employeeName)), employeeId(id) {}

    void showEmployee() const {
        std::cout << "Employee ID: " << employeeId << '\n';
    }
};
