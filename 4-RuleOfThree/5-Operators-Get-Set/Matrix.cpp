#include "Matrix.hpp"   					     	   
#include <iostream>   					     	   
//Definition des methodes de la classe Matrix   					     	   
Matrix::Matrix(int rows, int cols, int value){   					     	   
    this->m_rows=rows;   					     	   
    this->m_cols=cols;   					     	   
   					     	   
    this->m_tab = new int[rows*cols];   					     	   
    for(int i=0; i<rows; i++)   					     	   
    {   					     	   
        for(int j=0; j<cols; j++)   					     	   
        {   					     	   
            this->set(i,j,value);   					     	   
        }   					     	   
    }   					     	   
}   					     	   
Matrix::Matrix(const Matrix& m){   					     	   
    int rows = m.m_rows;   					     	   
    int cols = m.m_cols;   					     	   
   					     	   
    this->m_rows=rows;   					     	   
    this->m_cols=cols;   					     	   
   					     	   
    this->m_tab = new int[rows*cols];   					     	   
    this->m_tab = m.m_tab;   					     	   
}   					     	   
   					     	   
Matrix::~Matrix(){   					     	   
    delete[] this->m_tab;   					     	   
};   					     	   
   					     	   
int Matrix::getCols() const{   					     	   
    return this->m_cols;   					     	   
}   					     	   
int Matrix::getRows() const{   					     	   
    return this->m_rows;   					     	   
}   					     	   
void Matrix::set(int i, int j, int val){   					     	   
    this->m_tab[i*this->getCols()+j] = val;   					     	   
}   					     	   
int Matrix::get(int i, int j) const{   					     	   
    return this->m_tab[i*this->m_cols+j];   					     	   
}   					     	   
   					     	   
Matrix& Matrix::operator=(Matrix& m){   					     	   
    this->m_rows = m.m_rows;   					     	   
    this->m_cols = m.m_cols;   					     	   
    this->m_tab = new int[this->m_rows*this->m_cols];   					     	   
    std::swap(this->m_tab, m.m_tab);   					     	   
    delete[] m.m_tab;   					     	   
    return *this;   					     	   
}   					     	   
   					     	   
int Matrix::operator[](int index) const{   					     	   
    return (this->m_tab[index]);   					     	   
}   					     	   
int Matrix::operator()(int row, int col) const{   					     	   
    return (this->m_tab[row*this->m_cols+col]);   					     	   
}   					     	   
   					     	   
int& Matrix::operator[](int index){   					     	   
    return (this->m_tab[index]);   					     	   
}   					     	   
int& Matrix::operator()(int row, int col){   					     	   
    return (this->m_tab[row*this->m_cols+col]);   					     	   
}
   					     	   