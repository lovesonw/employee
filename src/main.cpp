#include "Employee.h"
#include "manager.h"

using namespace std;

int main()
{
    Employee e(1000, "zdc", 3);
    e.GetSum();
    manager m(1000, "zdc", 3, 10000);
    m.GetSum();
    cout << e.GetName() << endl;
    return 0;
}
