#include <iostream>

using namespace std;

int main()
{
    int optiune;
    string studenti[100];
    int nrStudenti=0;

    while (true)
    {

    cout << "\n1. Adauga student\n";
    cout << "2. Afiseaza studenti\n";
    cout << "3. Cauta student\n";
    cout << "4. Sterge student\n";
    cout << "0. Iesire\n";

    cout << "Alege o optiune: ";
    cin >> optiune;
    switch (optiune)
{
    case 1:
        cin.ignore();
        cout << "Introdu numele studentului. ";
        getline(cin,studenti[nrStudenti]);

        nrStudenti++;

        cout<<"Student adaugat: ";
        break;

    case 2:
        if(nrStudenti==0)
        {
            cout << "Nu exista studenti.\n";
        }
        else
        {
             cout << "Lista studenti:\n";

             for (int i = 0; i < nrStudenti; i++)
             {
                 cout<<i + 1 << ". " << studenti[i] << "\n";
             }
        }
        break;

    case 3:
        {
            cin.ignore();

            string cautat;
            bool gasit=false;

            cout<<"Introdu numele cautat";
            getline(cin,cautat);
            for(int i=0;i<nrStudenti;i++)
            {
                if(studenti[i]==cautat)
                {
                    cout<<"Student gasit la pozitia " << i + 1 << ".\n";
                    gasit=true;
                    break;
                }

            }
            if(gasit==false)
            {
                cout<<"Studentul nu a fost gasit./n";
            }
            break;
        }
    case 4:
    {
        cin.ignore();
        string cautat;
        bool gasit = false;
        cout << "Introdu numele studentului de sters: ";
        getline(cin, cautat);
         for (int i = 0; i < nrStudenti; i++)
    {
        if (studenti[i] == cautat)
        {
            for (int j = i; j < nrStudenti - 1; j++)
            {
                studenti[j] = studenti[j + 1];
            }

            nrStudenti--;
            gasit = true;

            cout << "Student sters.\n";
            break;
        }
    }
    if (gasit == false)
    {
        cout << "Studentul nu a fost gasit.\n";
    }

    break;

    }


    case 0:
        cout << "Program inchis.";
        break;

    default:
        cout << "Optiune invalida.";
}
}

    return 0;
}
