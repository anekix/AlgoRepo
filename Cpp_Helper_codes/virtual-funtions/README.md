Let's say you have these two classes:

```cpp
class Animal{
  public:
  void eat() { std::cout << "I'm eating generic food."; }
}


class Cat : public Animal{
  public:
  void eat() { std::cout << "I'm eating a rat."; }
}
```
In your main function:

```cpp
Animal *animal = new Animal;
Cat *cat = new Cat;
animal->eat(); // outputs: "I'm eating generic food."
cat->eat();    // outputs: "I'm eating a rat."
```
So far so good right? Animals eat generic food, cats eat rats, all without virtual.

Let's change it a little now so that eat() is called via an intermediate function (a trivial function just for this example):
```cpp
//this can go at the top of the main.cpp file
void func(Animal *xyz) { xyz->eat(); }
```
Now our main function is:
```cpp
Animal *animal = new Animal;
Cat *cat = new Cat;

func(animal); // outputs: "I'm eating generic food."
func(cat);    // outputs: "I'm eating generic food."
```
Uh oh... we passed a Cat into func(), but it won't eat rats. Should you overload func() so it takes a Cat* ? If you have to derive more animals from Animal they would all need their own func().

The solution is to make eat() a virtual function:
```cpp
class Animal{
  public:
  virtual void eat() { std::cout << "I'm eating generic food."; }
}
class Cat : public Animal{
  public:
  void eat() { std::cout << "I'm eating a rat."; }
}
Main:

func(animal); // outputs: "I'm eating generic food."
func(cat);    // outputs: "I'm eating a rat."
```
