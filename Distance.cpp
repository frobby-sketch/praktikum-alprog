#include <iostream>
#include <cmath>

using namespace std;

double dist(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;

    cout << "Objek 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Objek 2 (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Jarak kedua objek: " 
         << dist(x1, y1, x2, y2) << endl;

    return 0;
}

double dist(double x1, double y1, double x2, double y2)
{
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;

    return hypot(deltaX, deltaY);
}


