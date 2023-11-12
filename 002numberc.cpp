#include<iostream>

using namespace std;

double n_changer(double n) 
{
    return n * n * n / 732.17;
}

void print_n_change(double n)
{
    cout << "The number " << n << " will be changed!\n" << "BEHOLD!\n" << "Now the number is " << n_changer(n) << "!!!\n";
}

int main()
{
    print_n_change(53.11);
}