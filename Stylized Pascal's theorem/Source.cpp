#include <iostream>
#include <vector>
using namespace std;
int Mark(int a); string reverse(string str);
int main()
{
    int N; string s; string stock, stock1; int ACSSI = 0; int markg; int nombre_caractres; int countl = 0; int test = 0;
    vector<string> Stock;
    cout << "Veuillez rentrer le nombre choisi" << endl;
    cin >> N;
    nombre_caractres = ((4 * N) - 3) / 2;
    for (int i = 0; i < N; i++)
    {
        markg = Mark(i);
        countl = i;
        for (int j = 0; j < (4 * N) - 3; j++)
        {
            if (j == nombre_caractres) { s = 96 + N - i; cout << s; stock.push_back(s[0]); test = 1; }
            if (j > nombre_caractres && countl != 1)
            {
                countl = 1; test = 1;
                stock1 = reverse(stock1);
                if (i > 2)
                {
                    cout << stock1; test = 1;
                    for (int p = 0; p < stock1.size(); p++)
                    {
                        stock.push_back(stock1[p]);
                    }
                }
                else { cout << "-"; }
                stock1 = "";
            }
            if ((j == nombre_caractres + markg * 2) && markg < 0)
            {
                markg += 1; ACSSI -= 1;
                s = 96 + N + ACSSI + 1;
                cout << s; stock.push_back(s[0]); stock1.push_back(s[0]); test = 1;
            }
            if (test == 0 && j < nombre_caractres) { cout << "-"; stock.push_back('-'); stock1.push_back('-'); }
            if (j > nombre_caractres + 1 && i == 0) { cout << "-"; stock.push_back('-'); }
            if (j == nombre_caractres + 2 && i == 1) { s = s = 96 + N - i + 1; cout << s; stock.push_back(s[0]); }
            if (j > nombre_caractres && i == 1 && j != nombre_caractres + 2) { cout << "-"; stock.push_back('-'); }
            if (j == nombre_caractres + 2 && i == 2) { s = s = 96 + N - i + 1; cout << s; stock.push_back(s[0]); }
            if (j == nombre_caractres + 4 && i == 2) { s = s = 96 + N - i + 2; cout << s; stock.push_back(s[0]); }
            if (j > nombre_caractres + 1 && i == 2 && j != nombre_caractres + 2 && j != nombre_caractres + 4) { cout << "-"; stock.push_back('-'); }
            if (j == nombre_caractres + 1 && i == 2) { stock.push_back('-'); }
            test = 0;

        }
        Stock.push_back(stock);
        stock = "";
        ACSSI = 0;
        cout << endl;
    }
    for (int m = N - 2; m >= 0; m--)
    {
        if (m == 0) { cout << Stock[m] << "-" << endl; }
        else {
            cout << Stock[m] << endl;
        }
    }
    return 0;
}
int Mark(int a)
{
    if (a == 0) { return 0; }
    else { return -a; }
}
string reverse(string str)
{
    string s;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        s.push_back(str[i]);
    }
    return s;
}
