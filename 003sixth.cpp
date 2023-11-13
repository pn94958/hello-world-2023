#include<iostream>

using namespace std;

int sitxth(int n)
{
    return 1 * n * n * n * n * n * n;
}

void print_sixth(int n)
{
    cout << n << "^6 is " << sitxth(n) << ".\n";
}

int main()
{
    print_sixth(3);
    print_sixth(5);
    print_sixth(11);
    print_sixth(15);
    print_sixth(66);
}