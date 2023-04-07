
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

template<class T>
class Matrix{
protected:
    int rows, cols;
    vector<vector<T>> mat; 
public:
    Matrix(){rows=0: cols=0;}
    Matrix(int _rows, int _cols, constT& initial){
        rows=_rows;
        cols=_cols;
        mat.resize(_rows);
        for(int i=0; i<mat.size();i++){
            mat[i].resize(_cols, initial);
        }
    }
    Matrix(const Matrix<T>& m){
        rows=m.rows;
        cols=m.cols;
        mat=m.mat;
    }
    int rsize(){return rows;}
    int csize(){return cols;}
    virtual void resize(int _rows, int _cols){
        rows=_rows;
        cols=_cols;
        mat.resize(_rows);
        for(int i=0; i<mat.size();i++){
            mat[i].resize(_cols);
        }
    }
    virtual T& operator() (int row, int col){
        assert(row<rows && col<cols);
        return mat[row][col];
    }
    void print(){
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<(*this)(i,j)<<" ";
            }
            cout<<endl;
        }
        
    }
    
};