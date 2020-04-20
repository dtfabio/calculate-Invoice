#include <iostream>
using namespace std;

struct fattura{
char descrizione[30];
float qtot, prezzou, sconto, importo;
float iva;
};

int main()
{
    fattura fatt[2];
    float imptot=0.0, s=0.0;
    int iva=0,k;

    for (k=0;k<2;k++){
    cout<<"Inserire la descrizione del prodotto : "<<endl;
    cin>>fatt[k].descrizione;
    cout<<"Inserire la quantita' totale del prodotto : "<<endl;
    cin>>fatt[k].qtot;
    cout<<"Inserire il prezzo unitario del prodotto : "<<endl;
    cin>>fatt[k].prezzou;
    cout<<"Inserire lo sconto del prodotto : "<<endl;
    cin>>fatt[k].sconto;
    cout<<"Inserire l'iva del prodotto : "<<endl;
    cin>>fatt[k].iva;
}
for(k=0;k<2;k++)
{
                s=(fatt[k].qtot*fatt[k].prezzou)-((fatt[k].qtot*fatt[k].prezzou)*fatt[k].sconto)/100;
                cout<<"L'importo del prodotto : "<<fatt[k].descrizione<<" e' di : "<<s<<endl;
                if(fatt[k].iva==21)
                                   s*21/100;
                if(fatt[k].iva==10)
                                   s*10/100;
                if(fatt[k].iva==4)
                                  s*4/100;
                                  cout<<"L'importo del prodotto con iva  : "<<fatt[k].descrizione<<" e' di : "<<s<<endl;
                                  imptot=imptot+s;

}
cout<<"L'importo totale della fattura e' di : "<<imptot;

system("pause");
}
