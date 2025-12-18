#include <iostream>

using namespace std;

void pyramid(int height, int current = 1);

int main()
{
    int height = 5;
    pyramid(height);

    return 0;
}

void pyramid(int height, int current)
{
    if (current > height)
        return;

    
    for (int i = 0; i < height - current; i++)
        cout << " ";

    for (int i = 0; i < (2 * current - 1); i++)
        cout << char(178);

    cout << endl;

    pyramid(height, current + 1);
}


