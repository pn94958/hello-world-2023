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

void print_hit(int location)
{
    switch(location)
    {
        case 1:
            cout << "The enemy was hit in the head.\n";
            break;
        case 2:
            cout << "The enemy was hit in the torso.\n";
            break;
        case 3:
            cout << "The enemy was hit in a limb.\n";
            break;
    }
}

int main()
{
    int hit1 = decide_hit(30);
    int hit2 = decide_hit(95);
    int hit3 = decide_hit(60);
    int hit4 = decide_hit(15);

    print_hit(hit1);
    print_hit(hit2);
    print_hit(hit3);
    print_hit(hit4);
}