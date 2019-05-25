/*
Check whether a given number n is a power of 2 or 0
*/

#include <iostream>

using namespace std;

bool check_pow_2(int num) {
    if ((num & (num-1)) == 0)
    	return true;
    return false;
}

int main() {
    int num = 2;

    check_pow_2(num) ? cout << num << " is a Power of 2" : cout << num << " is not a power of 2";
    cout << endl;

    num = 5;
    check_pow_2(num) ? cout << num << " is a Power of 2" : cout << num << " is not a power of 2";
    cout << endl;

    return 0;
}
