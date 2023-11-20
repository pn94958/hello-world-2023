#include<iostream>

using namespace std;

constexpr int table_size = 848392;

double table[table_size];

void fill_table(double t[])
{
    for(int i = 0; i < table_size; i++)
        {
            t[i] = i/50;
        }
}

constexpr int initial_mid = table_size / 2;

int main()
{
    fill_table(table);
    cout << "The middle element of the table is " << table[initial_mid] << ".\n";
    cout << "The final element of the table is " << table[table_size] << ".\n";
}