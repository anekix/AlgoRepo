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
3) class members are private by default and can only be access by the objects of the class
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
4)
