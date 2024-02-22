#include <iostream>
#include <limits>

using namespace std;

int main() {
    int maxInt = numeric_limits<int>::max();
    int addOverflow = maxInt + 1;
    int multOverflow = maxInt * 2;

    cout << "Max int: " << maxInt << endl;
    cout << "Overflow due to addition: " << addOverflow << endl;
    cout << "Overflow due to multiplication: " << multOverflow << endl;

    int minInt = numeric_limits<int>::min();
    int subUnderflow = minInt - 1;
    int divUnderflow = minInt / 2;

    cout << "Min int: " << minInt << endl;
    cout << "Underflow due to subtraction: " << subUnderflow << endl;
    cout << "Underflow due to division: " << divUnderflow << endl;

    unsigned int maxUInt = numeric_limits<unsigned int>::max();
    unsigned int overflowedUInt = maxUInt + 1;

    cout << "Max unsigned int: " << maxUInt << endl;
    cout << "Overflowed unsigned int: " << overflowedUInt << endl;

    return 0;
}
