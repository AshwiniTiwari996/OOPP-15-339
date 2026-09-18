// 3rd programm
#include <iostream>
using namespace std;
class point
{
    int x;
    int y;

public:
    point(int a, int b) : x{a}, y{b} {
                          };
    void show()
    {
        cout << x << endl
             << y << endl;
    }
};
int main()
{
    point p1(2, 3);
    point p2(4, 5);
    p1.show();
    p2.show();
}