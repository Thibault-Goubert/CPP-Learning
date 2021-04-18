#ifndef _MATRIX_HPP_   					     	   
#define _MATRIX_HPP_   					     	   
   					     	   
//Declaration de la classe Matrix   					     	   
   					     	   
class Matrix{   					     	   
    private:   					     	   
        int m_rows, m_cols;   					     	   
        int* m_tab;   					     	   
   					     	   
    public:   					     	   
        Matrix(int rows, int cols, int value=1);   					     	   
        Matrix(const Matrix& m);   					     	   
        ~Matrix();   					     	   
        int getCols() const;   					     	   
        int getRows() const;   					     	   
        void set(int i, int j, int val);   					     	   
        int get(int i, int j) const;   					     	   
   					     	   
        Matrix& operator=(Matrix& m);   					     	   
        Matrix& operator=(int value);   					     	   
   					     	   
        int operator()(int row, int col) const;   					     	   
        int operator[](int index) const;   					     	   
   					     	   
        int& operator[](int index);   					     	   
        int& operator()(int row, int col);   					     	   
   					     	   
        int& at(int row, int col);   					     	   
        int& at(int index);   					     	   
};   					     	   
   					     	   
#endif   					     	   