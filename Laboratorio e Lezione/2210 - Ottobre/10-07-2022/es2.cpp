
/*
Leggere da tastiera una matrice M di interi di dimensione n × n e determinare
se M ha un punto di sella. Un elemento M[i][j] è un punto di sella per M se
esso è il massimo della riga i e il massimo della colonna j.
*/

#include <iostream>
using namespace::std;

const int n = 2;

void LeggiMatrice(int m[][n], int rowsize, int colsize){
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout<<"inserisci l'elemento m["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
    return;
}

bool is_max_of_row_col(int m[][n], int i, int j){
    for (int k = 0; k < n; k++)
    {
        if (m[i][j]<m[i][k])
        {
            return false;
        }
        if (m[i][j]<m[k][j])
        {
            return false;   
        }
    }
    return true;
    
}

bool PuntoSella(int m[][n]){
    bool trovato = true;
    int max=(m[0][0])-1;
    int cdv=-1;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {   
             cout<< "\n m r c: "<<m[r][c]<<"\n"<<endl;
            if (max<m[r][c])
            {
                max=m[r][c];
                cdv=c;
                cout<< "\n max: "<<max<<"\n cdv: "<<cdv;
            }
        }
        if(cdv!=-1){
            for (int k = 0; k < n && trovato; k++)
            {
                if(m[k][cdv]>max){
                    cout<< "\n m[k][cdv]: "<<m[k][cdv]<<"\n max: "<<max;
                    trovato=false;
                }
            }
            if(trovato){
                return trovato;
            }
        }
        trovato = true;
        max=(m[r+1][0])-1;
        cdv=-1;
    }

    return trovato;
}

bool HasSella(int m[][n]){
    
}

int main(){
    int mat[n][n];
    LeggiMatrice(mat, n, n);
    if(PuntoSella(mat)){
        cout << "\n\nHa un punto di sella\n"<<endl;        
    }
    else{
        cout << "\n\nNON Ha un punto di sella\n"<<endl;
    }
    return 0;
}


/*
void funzione(){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //m[i][j]
            // vediamo se m[i][j] è un massimo della riga i
            for (int k = 0; k < n; k++)
            {
                if(m[i][j]<m[i][k]){
                }
            }
            for (int k = 0; k < n; k++)
            {
                if (m[i][j]<m[k][j])
                {
                }
            }
        }
    }
}
*/