#ifndef PERSONAL_H
#define PERSONAL_H
#include <string>
using namespace std;

class Personal
{
    private:
            string name;
            string address;
            int age;
            int phoneNumber;
            
    public:
            Personal();
            Personal(string, string, int, int);
            void setName(string);
            void setAddress(string);
            void setAge(int);
            void setPhoneNumber(int);
            string getName() const;
            string getAddress() const;
            int getAge() const;
            int getPhoneNumber() const;

};

#endif