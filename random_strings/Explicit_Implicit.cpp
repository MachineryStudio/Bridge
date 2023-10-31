
#include<iostream>
#include<string>
#include <string.h>
#include <fstream>
#include <sstream>
using namespace std;

class Entity
{

private:

string m_Name;
     int m_A;

public:

//overloading constructor

    explicit Entity (const string& name)
    : m_Name(name), m_Age(-1){}

    //reference of a string
    //Entity(const string& name)
    //assign name to the private variable
    : m_Name(name), m_Age(-1){}
    Entity(int age)
    :m_Name("UnKknow"), mAge(age){}

};
//function
void PrintEntity(const Entity& entity)
{

    //Printf();
}

int main()
{

//function that uses the parameter of the constructor instead of the object
//c++ can construct an object because you have a constructor with that one specific parameter age or name
Printf(22);

//It does nor work because "Cherno is not a String is represented as a Chart[7] characters.
Printf("Cherno");
//to fix this uses this; C++ needs to pass the Chart[] to a string then to an Entity object
Printf(string ("Cherno"));
Printf(Entity("Cherno"));


//Normal way
Entity(Andre);
Entity(29);

//new way
//set up your constructor parameters
Entity a = "Cherno";
Entity b = 22;


//When using explicit, implicit is the way that regular way, you must type explicit to
//tell that people that you cannot create an entity just initializing a parameter from the constructor
//In that case
//way 1
Entity b = (Entity)22;
//way 2
Entity b = Entity(22);

std::cin.get();

}
