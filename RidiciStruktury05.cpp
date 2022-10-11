
#include <iostream>

using namespace std;

int main()
{
    int volba;
    cout << "\n1 = Faktorial, 2 = ?, 3 = Konec: ";
    cin >> volba;
    while (volba != 3)
    {
        switch (volba)
        {
        case 1:
        {
            int faktorial = 1;
            int n;
            cout << "Zadej cislo n: ";
            cin >> n;
            for (int i = n; i > 0 ; i--)
            {
                faktorial *= i;
            }
            cout << "Faktorial je: " << faktorial << endl;

        }
        break;
        case 2:
        {

        }
        break;
        default:
        {
            cout << "Nevybrana moznost";
        }
        break;
        }
        cout << "\n1 = Faktorial, 2 = ?, 3 = Konec: ";
        cin >> volba;
    }



}
