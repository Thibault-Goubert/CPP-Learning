int** array2D(int x, int y, int value = 0){   					     	   
   					     	   
    int** tab = new int*[x];   					     	   
    for(int z=0; z<x; z++){   					     	   
        tab[z] = new int[y];   					     	   
    }   					     	   
   					     	   
    for(int i=0; i<x; i++)   					     	   
    {   					     	   
        for(int j=0; j<y; j++)   					     	   
        {   					     	   
            tab[i][j] = value;   					     	   
        }   					     	   
    }   					     	   
   					     	   
    return tab;   					     	   
}   					     	   