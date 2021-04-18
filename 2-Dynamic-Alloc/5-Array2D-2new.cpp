int** initMatrix(int N, int M){   					     	   
   					     	   
    int** tab = new int*[N];   					     	   
    *tab = new int[M*N];   					     	   
   					     	   
    for(int i=0; i<N; i++)   					     	   
    {   					     	   
        tab[i] = *tab;   					     	   
        tab[i] += M*i;   					     	   
        for(int j=0; j<M; j++)   					     	   
        {   					     	   
            tab[i][j] = i+j;   					     	   
        }   					     	   
    }   					     	   
   					     	   
    return tab;   					     	   
}   					     	   