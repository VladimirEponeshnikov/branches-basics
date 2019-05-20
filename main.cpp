#include <iostream>
using namespace std;


int main()
{
    cout << "2 + 2 = ?" << endl;
    int x;
    cin >> x;
    if (x != 4) cout << "Wrong answer!" << endl;
    else cout << "Well done!" << endl;
    cin.get();
    return 0;
}
