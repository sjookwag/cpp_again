#include <iostream>
#include <vector>

using namespace std;

void main() {
    vector <int> v{1,2,3};
    try
    {
        for (int i = 0; i < 5; i++) {
            if (v.size() <= 0) {
                throw string("Underflow!");
            }
            
            if (v.size() < i) {
                throw i;
            }
            cout << v[i] << endl;
            v.pop_back();
        }
    }
    catch (string error)
    {
        cout << error << endl;
    }
    catch (int index)
    {
        cout << "v["<< index << "]는 vector의 범위를 벗어났습니다." << endl;
    }
}
