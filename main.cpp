// kommenttia yhdellä rivillä
/*
kommentteja, 1. rivi
kommentteja, 2. rivi
*/
#include <iostream>

using namespace std;

void kontrollinSiirtoEsimerkki(){
  cout<<"kävin täällä";
}
void kontrollinSiirtoParametrilla(string etunimi){
  cout<<etunimi;
}

int main()
{
   cout << "Hello World" 
        << endl;

    int ika = 16;
    cout<< ika
        << endl;
    
    
    const float pii = 3.141592;
    cout <<pii
         << endl;

double pallon_sade, pallon_ala, pallon_tilavuus;


int luku;
cout << "anna säde: " << endl;
cin >> luku;

pallon_sade=luku;
pallon_ala=4*pii*pallon_sade*pallon_sade;
pallon_tilavuus=pallon_ala*pallon_sade/3;

cout<<pallon_tilavuus<< endl;

int alueen_leveys = 15;
int alueen_pituus = 35;

int laatta_leveys = 5;
int laatta_pituus = 8;

cout << (alueen_leveys/laatta_leveys)*(alueen_pituus/laatta_pituus)<<endl;

cout << "leveys jakojäännös: "<<alueen_leveys%laatta_leveys<<endl;


cout << "Pituuden jakojäännös="<< alueen_pituus%laatta_pituus<<endl;

string autoja[8]={"Fiat Punto", "Mersu ", "Saab"};

cout << autoja[1]<< endl;

autoja[1]="Turbo Saab";

cout << autoja[1]<< endl;

autoja[7]="BMW";
cout << "auto indexillä 7: " << autoja[7] << endl;

//miten lisätään elementti arrayn loppuun.



if(ika==16)
{
  cout<<"Olet 16 vuotias" << endl;
  }

if(ika<16)
{
  cout << "Olet nuorempi kuin 16";
}
if(ika>16)
{
  cout << "Olet vanhempi kuin 16";
}
else if (ika < 16){
  cout << "olet alle 16";
}
else{
  cout << "Olet yli 16" << endl;
}
int i=0;
while(i<5){
  cout<<"while loopin kierros nro: "<<i<<endl;
  i=i+1;
}
for(int i=0; i<5; i++){
  cout << "for loopin kierros nro: " << i << endl;
}
cout<<endl;
kontrollinSiirtoEsimerkki();

kontrollinSiirtoParametrilla("Sisu");
}