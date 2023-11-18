#include<iostream>

using namespace std;

void compare(auto a, auto b)
{
    if(a == b)
        cout << "Same.\n";
    else
        cout << "Different.\n";
}

int main()
{
    compare(12, 12);
    compare(false, true);
    compare("blood", "twelve");
    compare(12, 13);
    compare("blood", "blood");
    compare('a', 'b');
}