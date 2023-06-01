#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
    string name;
    float height;
    int age;

    Person()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter height: ";
        cin >> height;

        cout << "Enter age: ";
        cin >> age;

        // cin.ignore();
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Height: " << height << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person person1;
    Person person2;

    if (person1.age > person2.age)
    {
        cout << person1.name << endl;
    }
    else if (person2.age > person1.age)
    {
        cout << person2.name << endl;
    }
    else
    {
        cout << "equal" << endl;
    }

    return 0;
}
