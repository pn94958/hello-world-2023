#include<iostream>

using namespace std;

int decide_hit(int roll)
{
    if (roll > 79)
        return 1;
    else if (roll > 58)
        return 2;
    else
        return 3;
}

int decide_damage(int location, int damage)
{
    switch(location)
    {
        case 1:
            return damage * 4;
            break;
        case 2:
            return damage * 3;
            break;
        case 3:
            return damage * 0.5;
            break;
    }
}

void print_hit(int location, int damage)
{
    int final_damage = decide_damage(location, damage);
    switch(location)
    {
        case 1:
            cout << "The enemy was hit in the head, inflicting " << final_damage << " points of damage.\n";
            break;
        case 2:
            cout << "The enemy was hit in the torso, inflicting " << final_damage << " points of damage.\n";
            break;
        case 3:
            cout << "The enemy was hit in a limb, inflicting " << final_damage << " points of damage.\n";
            break;
    }
}

int main()
{
    int hit1 = decide_hit(30);
    int hit2 = decide_hit(95);
    int hit3 = decide_hit(60);
    int hit4 = decide_hit(15);

    print_hit(hit1, 25);
    print_hit(hit2, 13);
    print_hit(hit3, 42);
    print_hit(hit4, 20);
}