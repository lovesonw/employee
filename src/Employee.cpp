#include "Employee.h"

Employee::Employee(int money, string name, int time)
{
    SetName(name);
    SetSalary(money);
    SetTime(time);
}

void Employee::SetSalary(int money)
{
    this->salary = money;
}

void Employee::SetTime(int time)
{
    this->time = time;
}

void Employee::SetName(string name)
{
    this->name = name;
}

int Employee::GetSalary()
{
    return this->salary;
}

int Employee::GetTime()
{
    return this->time;
}

string Employee::GetName()
{
    return this->name;
}

int Employee::GetSum()
{
    cout << GetTime() * GetSalary() << endl;
}
