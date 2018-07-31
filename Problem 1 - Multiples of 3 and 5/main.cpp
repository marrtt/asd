#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    sum = ((n / 3) * (n / 3 + 1) * 3 / 2) + (n / 5 * (n / 5 + 1) * 5 / 2) - (n / 15 * (n / 15 + 1) * 15 / 2);
    cout << sum << "\n";
    return 0;
}
