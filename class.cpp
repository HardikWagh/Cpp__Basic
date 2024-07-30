#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }
    // Setters
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    // Getters
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    // Method to display person's information
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person person1("Aman", 30);
    // Display initial information
    person1.displayInfo();
    // Modify the person's name and age
    person1.setName("Naman");
    person1.setAge(25);
    // Display updated information
    person1.displayInfo();
    return 0;
}
