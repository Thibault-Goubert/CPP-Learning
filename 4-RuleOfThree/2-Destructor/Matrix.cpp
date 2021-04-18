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