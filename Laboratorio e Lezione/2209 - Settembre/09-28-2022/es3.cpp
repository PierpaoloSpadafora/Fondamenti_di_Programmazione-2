#include <iostream>
using namespace :: std ;
int main ( ) {
    for ( int i = 0 ; i < 11 ; i ++ ) {
        for ( int j = 0 ; j < 11 ; j ++ ) {
            if ( i == 0 ) { // per la prima riga stampo j , con j - 1 ... 10
                if ( j != 10 ) {
                    if ( j == 0 ){
                        cout << "\t"; // metto uno spazio nel primissimo spazio
                    }
                    else {
                        cout << j << "\t" ;
                    }
                }
                else{
                    cout << j << "\t"<< endl ; // nell'ultima iterazione vado a capo dopo la stampa
                }
            }
            else {                                           
                if ( j !=10 ) {
                    if ( j == 0 ){
                        cout<< i << "\t" ; // dalla seconda riga in poi stampo prima i e poi i * j
                    }
                    else{
                        cout << i * j << "\t" ;
                    } 
                }
                else{
                    cout << i * j << "\t" << endl ; // nell'ultima iterazione vado a capo dopo la stampa
                } 
                    }
        }
    }
return 0 ;
}