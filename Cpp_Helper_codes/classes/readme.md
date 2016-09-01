1) structure of a class
```cpp
class DateClass
{
public:
    int m_year;
    int m_month;
    int m_day;
 
    void print() // defines a member function named print()
    {
        std::cout << m_year << "/" << m_month << "/" << m_day;
    }
};

```
2) creating objects and accessing datamembers
```cpp
#include <iostream>
#include <string>
 
class Employee
{
public:
    std::string m_name;
    int m_id;
    double m_wage;
 
    // Print employee information to the screen
    void print()
    {
        std::cout << "Name: " << m_name <<
                "  Id: " << m_id << 
                "  Wage: $" << m_wage << '\n'; 
    }
};
 
int main()
{
    // Declare two employees
    Employee alex { "Alex", 1, 25.00 };
    Employee joe { "Joe", 2, 22.25 };
 
    // Print out the employee information
    alex.print();
    joe.print();
 
    return 0;
}
```
3) class members are private by default and can only be access by other members of the class
```cpp
class DateClass // members are private by default
{
    int m_month; // private by default, can only be accessed by other members
    int m_day; // private by default, can only be accessed by other members
    int m_year; // private by default, can only be accessed by other members
};
 
int main()
{
    DateClass date;
    date.m_month = 10; // error
    date.m_day = 14; // error
    date.m_year = 2020; // error
 
    return 0;
}
```
Can be made public using
```cpp
class DateClass
{
public: // note use of public keyword here, and the colon
    int m_month; // public, can be accessed by anyone
    int m_day; // public, can be accessed by anyone
    int m_year; // public, can be accessed by anyone
};
 
int main()
{
    DateClass date;
    date.m_month = 10; // okay because m_month is public
    date.m_day = 14;  // okay because m_day is public
    date.m_year = 2020;  // okay because m_year is public
 
    return 0;
}
```
4)Minxing access specifiers.
```cpp
#include <iostream>
 
class DateClass // members are private by default
{
    int m_month; // private by default, can only be accessed by other members
    int m_day; // private by default, can only be accessed by other members
    int m_year; // private by default, can only be accessed by other members
 
public:
    void setDate(int month, int day, int year) // public, can be accessed by anyone
    {
        // setDate() can access the private members of the class because it is a member of the class itself
        m_month = month;
        m_day = day;
        m_year = year;
    }
 
    void print() // public, can be accessed by anyone
    {
        std::cout << m_month << "/" << m_day << "/" << m_year;
    }
};
 
int main()
{
    DateClass date;
    date.setDate(10, 14, 2020); // okay, because setDate() is public
    date.print(); // okay, because print() is public
 
    return 0;
}
```
we can’t access date’s members variables m_month, m_day, and m_year directly from main (because they are private), we are able to access them indirectly through public member functions setDate() and print()


5)Encapsulation is achieved by access specifiers (public , private, protected) in c++. Why and how does it even matters ?????

In object-oriented programming, Encapsulation (also called information hiding) is the process of keeping the details about how an object is implemented hidden away from users of the object. Instead, users of the object access the object through a public interface. In this way, users are able to use the object without having to understand how it is implemented.

In C++, we implement encapsulation via access specifiers. Typically, all member variables of the class are made private (hiding the implementation details), and most member functions are made public (exposing an interface for the user). Although requiring users of the class to use the public interface may seem more burdensome than providing public access to the member variables directly, doing so actually provides a large number of useful benefits that help encourage class re-usability and maintainability.

Note: The word encapsulation is also sometimes used to refer to the packaging of data and functions that work on that data together. We prefer to just call that object-oriented programming.


Benefit: encapsulated classes are easier to change

Consider this simple example:
```cpp
#include <iostream>
 
class Something
{
public:
    int m_value1;
    int m_value2;
    int m_value3;
};
 
int main()
{
    Something something;
    something.m_value1 = 5;
    std::cout << something.m_value1 << '\n';
}
```
While this program works fine, what would happen if we decided to rename m_value1, or change its type? We’d break not only this program, but likely most of programs that use class Something as well!

Encapsulation gives us the ability to change how are classes are implemented without breaking all of the programs that use them as well.Ex

Here is the encapsulated version of this class that uses functions to access m_value1:
```cpp
#include <iostream>
 
class Something
{
private:
    int m_value1;
    int m_value2;
    int m_value3;
 
public:
    void setValue1(int value) { m_value1 = value; }
    int getValue1() { return m_value1; }
};
 
int main()
{
    Something something;
    something.setValue1(5);
    std::cout << something.getValue1() << '\n';
}
```
Now, let’s change the class’s implementation:
```cpp
#include <iostream>
 
class Something
{
private:
    int m_value[3]; // note: we changed the implementation of this class!
 
public:
    // We have to update any member functions to reflect the new implementation
    void setValue1(int value) { m_value[0] = value; }
    int getValue1() { return m_value[0]; }
};
 
int main()
{
    // But our program still works just fine!
    Something something;
    something.setValue1(5);
    std::cout << something.getValue1() << '\n';
}
```
Note that because we did not alter the prototypes of any functions in our class’s public interface, our program that uses the class continues to work without any changes.




