#include <iostream>

using namespace std;

class C
{
    public:
        C(const char* s = "", int i = 0, double d = 1)
        {
            strcpy(data_member1, s);
            data_member2 = i;
            data_member3 = d;
        }
        
        void member_function() const
        {
            cout << data_member1 << ' ' << data_member2
                << ' ' << data_member3 << endl;
        }

        void member_function2(int i, const char* s = "unknown")
        {
            data_member2 = i;
            cout << i << " received from " << s << endl;
        }

    private:
        char data_member1[20];
        int data_member2;
        double data_member3;
};

int main()
{
    C o1("object1", 100, 200), o2("object2"), o3;
    o1.member_function();
    o2.member_function2(9);
}
