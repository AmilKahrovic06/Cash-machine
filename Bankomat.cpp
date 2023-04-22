#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    int j, s = 1234, s1, p, k = 13000, n;
    system("color f0");
    cout << "Choose language to continue:\n1-Srpski\n2-English\n";
    cin >> j;
    system("cls");
    switch (j)
    {
    case 1:
        cout << "Ukucajte vasu sifru:\n";
        cin >> s1;
        while (s1 != s)
        {
            cout << "Uneli ste pogresnu sifru;\n";
            cout << "Ukucajte vasu sifru:\n";
            cin >> s1;
            system("cls");
        }
        if (s1 == s)
        {
            cout << "Uneli ste tacnu sifru.\n";
            Sleep(1000);
            system("cls");
        }
        cout << "Izaberite neku od navedenih opcija:\n1-Presek stanja\n2-Podizanje novca\n";
        cin >> p;
        system("cls");
        switch (p)
        {
        case 1:
            cout << "Vase stanje je:" << k << " din" << endl;
            break;
        case 2:
            cout << "Koliko novca zelite da podignete?\n";
            cin >> n;
            system("cls");
            cout << "Podigli ste " << n << " din.\nStanje na racunu je " << k - n << " din." << endl;

        }
        break;
    case 2:
        cout << "Type your password:\n";
        cin >> s1;
        system("cls");
        while (s1 != s)
        {
            cout << "You typed wrong password;Try again;\n";
            cout << "Type your password:\n";
            cin >> s1;
            system("cls");
        }
        if (s1 == s)
        {
            cout << "Correct password.\n";
            Sleep(1000);
            system("cls");
        }
        cout << "Choose an option:\n1-Anoverview\n2-Raising money\n";
        cin >> p;
        system("cls");
        switch (p)
        {
        case 1:
            cout << "Your view is:" << k << " din" << endl;
            break;
        case 2:
            cout << "How much money do you want to raise?\n";
            cin >> n;
            system("cls");
            cout << "You raised " << n << " din.\nAnoverview is: " << k - n << " din." << endl;
            break;
        default:
            cout << "";
        }
        break;
    default:
        cout << "";
    }
    return 0;
}

