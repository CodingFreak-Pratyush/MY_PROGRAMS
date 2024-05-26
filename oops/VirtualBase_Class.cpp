// The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances. 





#include <iostream>
using namespace std;

class student
{

protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }

    void display_roll_no(void)
    {
        cout << "Your roll_no is :: " << roll_no;
    }
};

class Test : virtual public student
{

protected:
    int maths;
    int physics;

public:
    void set_marks(int m, int p)
    {
        maths = m;
        physics = p;
    }

    void display_marks(void)
    {
        cout << "your marks in physics:: " << physics << endl;
        cout << "your marks in maths:: " << maths << endl;
    }
};

class sports : virtual public student
{

protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }

    void display_score(void)
    {
        cout << "Your score is :: " << score;
    }
};

class result : public Test, public sports
{

private:
    int total = maths + physics + score;

public:
    void display_results(void)
    {
        cout << "your result is::" << total;
    }
};

int main()
{

    result pratyush;
    pratyush.set_roll_no(101);
    pratyush.set_marks(97, 98);
    pratyush.set_score(30);
    pratyush.display_roll_no();
    pratyush.display_marks();
    pratyush.display_score();
    pratyush.display_results();
}