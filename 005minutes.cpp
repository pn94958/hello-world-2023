#include<iostream>

using namespace std;

int min_to_hr(int min)
{
    int hr = min / 60;
    return hr;
}

int min_to_min(int min)
{
    int hr = min_to_hr(min);
    return min % (60 * hr);
}

void print_min_to_hr(int min)
{
    if(min >= 60)
    cout << min << " is " << min_to_hr(min) << "h" << " " << min_to_min(min) << "m.\n";
    else
    cout << min << "m.\n";
}

int main()
{
    cout << "This program converts minutes to hours and minutes. Enter amount of minutes to convert.\n";
    int m = 0;
    cin >> m;
    print_min_to_hr(m);
}