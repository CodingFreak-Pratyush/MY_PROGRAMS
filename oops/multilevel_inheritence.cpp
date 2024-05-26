#include <iostream>
using namespace std;

class base
{

public:
    int a = 4;
    int b = 7;
};

class Add : public base
{

public:
    int add(void)
    {
        return a + b;
    }
};

class avg : public Add
{

public:
    void Avg()
    {
        cout << add() / 2;
    }
};

int main()
{

    avg num;
    num.Avg();
}