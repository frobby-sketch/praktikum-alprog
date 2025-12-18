
#include <iostream>
#include <string>

using namespace std;


string encrypt(string text);

int main()
{
    string result = encrypt("Yogyakarta");
    cout << "Result: " << result << endl;

    return 0;
}

string encrypt(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        char c = text[i];

        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
            c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O')
        {
            text[i] = '*';
        }
    }
    return text;
}



