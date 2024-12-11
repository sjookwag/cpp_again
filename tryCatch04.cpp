#include <iostream>
using namespace std;
void func1() { throw string("예외 발생"); }
void func2() { func1(); }
void func3() { func2(); }
int main()
{
    try {
        func3();
    }
    catch (string exception) {
        cout << exception << endl;
    }
    return 0;
}
