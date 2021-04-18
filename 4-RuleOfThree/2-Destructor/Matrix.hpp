#ifndef _MATRIX_HPP_   					     	   
#define _MATRIX_HPP_   					     	   
   					     	   
//Declaration de la classe Matrix   					     	   
   					     	   
class Matrix{   					     	   
    private:   					     	   
        int m_rows, m_cols;   					     	   
        int* m_tab;   					     	   
   					     	   
    public:   					     	   
        Matrix(int rows, int cols, int value=1);   					     	   
        ~Matrix();   					     	   
        int getCols() const;   					     	   
        int getRows() const;   					     	   
        void set(int i, int j, int val);   					     	   
        int get(int i, int j) const;   					     	   
};   					     	   
   					     	   
#endif   					     	   