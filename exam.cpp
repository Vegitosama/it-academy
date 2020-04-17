//  Write program that:
//1. Asks user about text he wants to cipher;
//2. Asks user about key he wants to use;
//3. Ciphers the given text including lowercase and uppercase letters
//4. [Additionally] can work also for negative keys – then it shifts characters in the opposite direction.
//5. Prints result for the user.

#include <iostream>
#include <string>

using namespace std;

int main()

{
    string text;
    int key;

    //cin.ignore(); //funckaj do unikniecia bledu konca wiersza






    // slowo do zaszyfrowania

    cout << "Podaj slowo do zaszyfrowania:\n";
    getline(cin , text);

 // klucz do zaszyfrowania

    cout << "Podaj klucz:\n";
    cin >> key;

    // petla dla kazdego char. tekstu
    for (int i = 0, n = text.length(); i < n; i++)
    {
        if (isalpha(text[i])) //jesli char to litera
        {
            //ASCII 65 = 'A'
            int offset = 65;

            //ASCII 97 = 'a'
            if (islower(text[i]))
                offset = 97;

            int szyfr = (((int)text[i] - offset + key)% 26)+ offset; //formula do szyfrowania teksu przez klucz

            // wyswietlania zaszyfrowanego char.
            cout << (char)szyfr;
        }
        else //jesli char. to nie litera
            cout << text[i];
    }

    cout << endl;
    return 0;
}


