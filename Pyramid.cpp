#include <iostream>

using namespace std;

void pyramid(int height);

int main()
{
int height = 5;
 pyramid2(height);

 system("pause");

return 0;
}

void pyramid(int height)
{
for(int i = 1; i <= height; i++) {
 
 for (int j = 0; j < height - i; j++) {
 cout << " ";
 }
 
 
	for (int k = 0; k < (2 * i - 1); k++) {
		cout << char(178);
 }
 cout << endl;
}
}

