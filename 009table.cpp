#include<iostream>

using namespace std;

constexpr int table_size = 848392;

double table[table_size];

void fill_table(double t[])
{
    for(int i = 0; i < table_size; i++)
        {
            t[i] = i*13;
        }
}

constexpr int initial_mid = table_size / 2;

void table_thingie(double t[], int n)
{
    int mid = initial_mid;
    if (n > 0) {
        for (int i = n; i > 0; i--)
        {
            cout << t[mid] << "\n";
            mid /= 1.2;
        }
    }
    else
    cout << "Error.\n";
}

int main()
{
    fill_table(table);
    cout << "The middle element of the table is " << table[initial_mid] << ".\n";
    cout << "The final element of the table is " << table[table_size] << ".\n";

    table_thingie(table, 52);
}