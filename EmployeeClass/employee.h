#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    private:
            string name;
            int idNumber;
            string department;
            string position;
    
    public:
            Employee(string, int, string, string);
            Employee(string, int);
            Employee();
            void setName(string);
            void setIdNumber(int);
            void setDepartment(string);
            void setPosition(string);
            string getName() const;
            int getIdNumber() const;
            string getDepartment() const;
            string getPosition() const;
};

#endif