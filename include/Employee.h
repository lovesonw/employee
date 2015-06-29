#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee
{
    public:
                    Employee(int money, string name, int time);
        void        SetName(string name);
        void        SetSalary(int money);
        void        SetTime(int time);
        int         GetSalary();
        int         GetTime();
        string      GetName();
        int         GetSum();
    private:
        string  name;
        int     time;
        int     salary;
};

#endif // EMPLOYEE_H
