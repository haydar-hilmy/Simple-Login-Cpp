#include <iostream>

using namespace std;

bool login(string usr, string pass)
{
    if (usr == "admin" && pass == "admin")
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    string username, password;
    bool benar = false;

    cout << "==== Login ====" << endl;

    while (benar == false)
    {

        cout << "Input Username: ";
        cin >> username;

        cout << "Input Password: ";
        cin >> password;

        benar = login(username, password);

        if (benar == false)
        {
            cout << "Username atau Password yang dimasukkan salah!" << endl;
        }
    }

    cout << "\n\nAnda Berhasil Login!\n"
         << endl;
}