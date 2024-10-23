/*
Encapsulation is one of the core principles of Object-Oriented Programming (OOP), and it refers to bundling the data (variables) and methods (functions) that operate on the data into a single unit, i.e., a class. It also restricts direct access to some of an object's components, which is important for maintaining data integrity and security.

Key Points of Encapsulation in C++:
Data Hiding: By making class members (variables or functions) private, you can prevent unauthorized or unintended access to them. Only public methods of the class can access or modify these private members.

Access Control: Encapsulation allows you to define the access level of class members. In C++, this is done using:

public: Members are accessible from outside the class.
private: Members are accessible only from within the class.
protected: Members are accessible in the class and its derived classes.

Encapsulation ensures that the internal representation of an object is hidden from the outside world, exposing only what is necessary through a well-defined interface (public methods).

*/

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;

public:
    // Constructor to initialize employee data
    Employee(string empName, int empAge) {
        name = empName;
        age = empAge;
    }

    // Public method to get employee name
    string getName() {
        return name;
    }

    // Public method to set employee name
    void setName(string empName) {
        name = empName;
    }

    // Public method to get employee age
    int getAge() {
        return age;
    }

    // Public method to set employee age
    void setAge(int empAge) {
        if (empAge > 0) {
            age = empAge;
        } else {
            cout << "Age cannot be negative or zero!" << endl;
        }
    }

    // Display employee details
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create an object of Employee class
    Employee emp("John Doe", 30);

    // Access and modify data using public methods
    emp.displayInfo(); // Output: Name: John Doe, Age: 30

    // Setting new values
    emp.setName("Jane Doe");
    emp.setAge(28);

    emp.displayInfo(); // Output: Name: Jane Doe, Age: 28

    // Trying to set an invalid age
    emp.setAge(-5); // Output: Age cannot be negative or zero!

    return 0;
}

