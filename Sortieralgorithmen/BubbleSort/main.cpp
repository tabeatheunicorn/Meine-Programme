#include <iostream>

using namespace std;

int main()
{

    cout <<"Gib die Anzahl der zu sortierenden Zahlen ein"<< endl;
    int anzahl = 0;
    cin >>anzahl;
    int bubblesort[anzahl];
    int aktuelleZahl = 0;
    for(int i = 0; i < anzahl; i++)
    {
        cout<<"Gib die nächste Zahl ein"<< endl;
        cin>>aktuelleZahl;
        bubblesort[i] = aktuelleZahl;
    }

    for(int j=0;j < anzahl-2; j++)
    {
        for(int i = 0; i < anzahl-j-1; i++)
        {
            if(bubblesort[i]< bubblesort[i+1])
            {
                aktuelleZahl = bubblesort[i+1];
                bubblesort[i+1]=bubblesort[i];
                bubblesort[i] = aktuelleZahl;
            }
        }
    }

    for(int i=0; i<anzahl; i++)
    {
        cout<<bubblesort[i]<<" ";
    }


    return 0;
}
