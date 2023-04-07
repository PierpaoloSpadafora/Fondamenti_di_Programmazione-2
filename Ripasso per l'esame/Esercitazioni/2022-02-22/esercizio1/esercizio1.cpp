


//Data la seguente porzione di programma rispondere alle domande corrispondenti: 
    
void func(char& a, char b){
char c = a;
a = b;
b = c;
}
int main()
{
char* nome = new char[3]{..i primi tre caratteri diversi del tuo nome..}; //{'P','I','E'}

//1. La seguente istruzione è corretta? Se sì, cosa stampa?
    cout << *(nome[1]) << endl;

    /*
    Non è corretta, nome[1] corrisponde all'emento di indice 1 dell'array nome
    *nome è un puntatore al primo elemento dell'array nome
    per scorrere all'elemento di indice 1 dell'array nome bisogna incrementare
    l'indirzzo di memoria di offset pari alla grandezza di un elemento dell'array

    La sintassi corretta sarebbe:

        cout << *(nome + 1) << endl;

    */


//2. La seguente istruzione è corretta? Se sì, cosa stampa?
    cout << *(nome + 2) << endl; 
    /*
    Si.
    Stampa 'E'
    */


//3. La seguente istruzione è corretta? Se sì, cosa stampa? 
    char* a = &nome[2];
    cout << *(a - 1) << endl;
    /*
    Si.
    Stampa 'I'
    */


 //4. Cosa viene stampato dalla seguente porzione di codice? 
    char* nome_prof = new char[3]{'m','a','t'};
    func (nome_prof[0], nome_prof[1]);
    cout << nome_prof[0] << " " << nome_prof[1] << endl;

    /*
    'a a'
    */


/**/





}