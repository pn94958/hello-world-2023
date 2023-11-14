#include<iostream>

using namespace std;

int damage_multiplier(int damage)
{
    return damage * 4;
}

void print_damage(int damage)
{
    cout << "The target was hit in the head for " << damage_multiplier(damage) << " points of damage, causing a serious injury.\n";
}

int main()
{
    print_damage(12);
}