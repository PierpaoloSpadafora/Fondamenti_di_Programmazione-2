//Data la seguente porzione di programma rispondere alle domande corrispondenti: 

#include <iostream>
using namespace std;

int main()
{
int* matricola = new int[6]{2,3,1,0,5,3}; //scrivi sul foglio la tua matricola
//1. La seguente istruzione è corretta? Se sì, cosa stampa?
//cout << *(matricola + 3) << *(matricola + 2) << endl; 

Si, stampa: "01"



//2. La seguente istruzione è corretta? Se sì, cosa stampa?
//cout << *(matricola[0]) << endl; 

No



//3. Cosa viene stampato dalla seguente porzione di codice?  
int& a = matricola[4];
int b = matricola[5];
--a;
b += 1;
cout << matricola[4] << " " << matricola[5] << endl;


"4 3" 




//4. Come andrebbe deallocata la memoria dinamica allocata inizialmente?{2,3,1,0,5,3}
    //A 
    for(int i = 0; i < 6; i++)
    delete matricola[i];
    //B
    for(int i = 0; i < 6; i++)
    delete *matricola[i];
    //C
    // Nel main non serve deallocare la memoria dinamica.
    //D
    delete [] matricola;

}