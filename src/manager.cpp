#include "manager.h"

manager::manager(int money, string name, int time, int add) : Employee(money, name, time)
{
    SetName(name);
    SetSalary(money);
    SetTime(time);
    SetAdd(add);
}

void manager::SetAdd(int add)
{
    this->add = add;
}

int manager::GetAdd()
{
    return this->add;
}

int manager::GetSum()
{
    cout << GetSalary() * GetTime() + GetAdd() << endl;
}
