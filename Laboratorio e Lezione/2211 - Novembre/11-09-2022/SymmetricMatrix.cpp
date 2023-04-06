#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

//in una matrice simmetrica m(i,j)=m(j,i)

template<class T>
class SymmetricMatrix: public Matrix<T>{ 
private:
    using Matrix<T>::rows;  //oppure this->rows
    using Matrix<T>::cols;  // ...       
    using Matrix<T>::mat;  // ...
public: 
    SymmetricMatrix(int _rows, const T& initial){
        rows=_rows;
        cols=_cols;
        mat.resize(_rows);
        for (int i = 0; i < _rows; i++)
        {
            mat[i].resize(i+1);
        }        
    }
    T& operator() (int row, int col){
        assert(row<rows && col<cols);
        if(row<col){
            return mat[col][row];
        }
        else{
            return mat[row][col];
        }
    }
};
