#include <iostream>
#include <vector>

using namespace std;

void main() {
    vector <int> v{1,2,3};
    try
    {
        while (true) {
            if (v.size() <= 0) { //예외 발생
                throw string("Underflow!");
            }
            v.pop_back();
        }
    }
    catch (string error)
    {
        cout << error << endl;
    }
}
