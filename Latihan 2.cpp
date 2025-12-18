#include <iostream>

using namespace std;

void pyramid(int height, int type);

int main()
{
    cout << "pyramid(5, 0)" << endl;
    pyramid(5, 0);

    cout << "\npyramid(5, 1)" << endl;
    pyramid(5, 1);

    cout << "\npyramid(5, 2)" << endl;
    pyramid(5, 2);

    return 0;
}


void pyramid(int height, int type)
{
    if (type != 0 && type != 1 && type != 2)
        type = 0;

    for (int i = 1; i <= height; i++)
    {
        if (type == 1)
        {
            for (int s = 0; s < height - i; s++)
                cout << " ";
        }

        if (type == 2)
        {
            for (int s = 0; s < height - i; s++)
                cout << " ";
        }

        int starCount;
        if (type == 2)
            starCount = 2 * i - 1;
        else
            starCount = i;

        for (int k = 0; k < starCount; k++)
            cout << "*";

        cout << endl;
    }
}

