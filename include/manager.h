#ifndef MANAGER_H
#define MANAGER_H

#include <Employee.h>


class manager : public Employee
{
    public:
                    manager(int money, string name, int time, int add);
        void        SetAdd(int money);
        int         GetAdd();
        int         GetSum();
    private:
        string  name;
        int     time;
        int     salary;
        int     add;
};

#endif // MANAGER_H
