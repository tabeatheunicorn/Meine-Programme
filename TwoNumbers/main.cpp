#include <iostream>

using namespace std;
//Alice and Bob are playing a game. Alice initially has the number A and Bob has the number B. There are a total of N turns in the game,
//and Alice and Bob alternatively take turns. In each turn the player whose turn it is, multiplies his or her number by 2. Alice has the first turn.
//Suppose after all the N turns, Alice's number has become C and Bob's number has become D. You want to calculate the integer division of the
//maximum number among C and D by the minimum number among C and D.

int main()
{
    int anzahlFaelle = 0;
   cin >> anzahlFaelle ;
   int fallmatrix[anzahlFaelle][3]; //enthält die Anfangszahlen von Alice und Bob sowie die Anzahl der Spielrunden
   //Werte aufnehmen
   for(int i=0; i<anzahlFaelle; i++)
   {
       cin>>fallmatrix[i][0] >>fallmatrix[i][1] >>fallmatrix[i][2];
   }

   for(int i = 0; i< anzahlFaelle; i++)
   {
       if(fallmatrix[i][2]%2 == 0)
       {
           if(fallmatrix[i][0] < fallmatrix[i][1])
           {
               cout<< fallmatrix[i][1] / fallmatrix[i][0]<<endl;
           }
           else
           {
              cout<< fallmatrix[i][0]/ fallmatrix[i][1]<<endl;
           }
       }
       else
       {
          if(fallmatrix[i][0] *2 < fallmatrix[i][1]) //Dieser Vergleich ist unnötigt, da c++ min und max fkt bietet
           {
               cout<< fallmatrix[i][1] / fallmatrix[i][0]*2<<endl;
           }
           else
           {
              cout<< fallmatrix[i][0]*2/ fallmatrix[i][1]<<endl;
           }
       }
   }
    return 0;
}
