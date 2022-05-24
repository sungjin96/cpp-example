#include <iostream>
#include <numbers>

using namespace std;

int main() {
    cout << (int)numeric_limits<int8_t>::max() << endl;
    cout << (int)numeric_limits<int16_t>::max() << endl;
    cout << (int)numeric_limits<int32_t>::max() << endl;
    cout << (int)numeric_limits<int64_t>::max() << endl;

    return 0;
}
