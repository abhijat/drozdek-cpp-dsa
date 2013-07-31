#include <iostream>

using namespace std;

class Base
{
    public:
        Base() {}
    protected:
        virtual int f() const 
        { 
            return 1; 
        }

        int data_member;
};

class Derived : public Base
{
    public:
        void foo()
        {
            cout << Base::f() << endl;
        }
};

int main()
{
    Derived d;
    d.foo();
}
