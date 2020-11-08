#include <iostream>
using namespace std;

class Animal
{
    public:
        //Constructor
        Animal()
        {
            cout<<"Animal constructor executing.\n";
        }
        //Problem occurs if we don't declare it virtual
        virtual ~Animal()
        {
            cout<<"Animal destructor executing.\n";
        }

};

class Dog : public Animal
{
    public:
        Dog() : Animal()
        {
            cout<<"Dog constructor executing.\n";
        }
        ~Dog()
        {
            cout<<"Dog destructor executing.\n";
        }
};

int main()
{
    Animal *myAnimal = new Dog;
    delete myAnimal;

    return 0;
}