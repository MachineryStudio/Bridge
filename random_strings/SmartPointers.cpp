#include <iostream>
#include <string>
#include<memory>

class Entity
{
public:

    Entity()
    {

        std::cout <<"Created Entity!" <<std::endl;
    }

    ~Entity()
    {

        std::cout<<"Destroyed Entity!" <<std::endl;

    }

    void Printf(){}

};

int main()
{

    {   //specifier unique_ptr
        //way 1 explicit
        //std::unique_ptr<Entity> entity = new Entity();
        //way 2; implicit
        std::unique_ptr<Entity> entity (new Entity());
        //the perfect way 3
        std::unique_ptr<Entity> entity =std::make_unique<Entity>();

        //the problem with this is that you cannot copy or use the copy constructor another pointer
        std::unique_ptr<Entity> e0 = entity;


        entity->Printf();

        //shared pointers allow another block of memory for the control
        std::shared_ptr<Entity> sharedP = std::make_shared<Entity>();
        //shared pointer way2
        std::shared_ptr<Entity> sharedP(new Entity());

        //copy the pointer
        std::shared_ptr<Entity> e1 = sharedP;


    }

    std::cin.get();

}

#include <iostream>
using namespace std;

class SmartPtr {
    int* ptr; // Actual pointer
public:
    // Constructor: Refer https:// www.geeksforgeeks.org/g-fact-93/
    // for use of explicit keyword
    explicit SmartPtr(int* p = NULL) { ptr = p; }

    // Destructor
    ~SmartPtr() { delete (ptr); }

    // Overloading dereferencing operator
    int& operator*() { return *ptr; }
};

int main()
{
    SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;

    // We don't need to call delete ptr: when the object
    // ptr goes out of scope, the destructor for it is automatically
    // called and destructor does delete ptr.

    return 0;
}

#include <iostream>
using namespace std;

// A generic smart pointer class
template <class T>
class SmartPtr {
    T* ptr; // Actual pointer
public:
    // Constructor
    explicit SmartPtr(T* p = NULL) { ptr = p; }

    // Destructor
    ~SmartPtr() { delete (ptr); }

    // Overloading dereferncing operator
    T& operator*() { return *ptr; }

    // Overloading arrow operator so that
    // members of T can be accessed
    // like a pointer (useful if T represents
    // a class or struct or union type)
    T* operator->() { return ptr; }
};

int main()
{
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    cout << *ptr;
    return 0;
}
