
#include <iostream>
#include <string>

using namespace std;

// deklarasi fungsi encrypt
string encrypt(string text);

int main()
{
    string result = encrypt("Yogyakarta");
    cout << "Result: " << result << endl;

    return 0;
}

// fungsi encrypt()
// mengganti semua huruf vokal dengan '*'
string encrypt(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        char c = text[i];

        // cek huruf vokal (besar dan kecil)
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
            c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O')
        {
            text[i] = '*';
        }
    }
    return text;
}


