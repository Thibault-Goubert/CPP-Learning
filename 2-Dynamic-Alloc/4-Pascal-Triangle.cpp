int** pascal(int N){   					     	   
   					     	   
    int** tab = new int*[N];   					     	   
    for(int z=0;z<N;z++){   					     	   
        tab[z] = new int[z+1];   					     	   
    }   					     	   
   					     	   
    for(int i=0;i<N;i++){   					     	   
        for(int j=0;j<i+1;j++){   					     	   
            if(j==0 || j==i){   					     	   
                tab[i][j] = 1;   					     	   
            }   					     	   
            else{   					     	   
                tab[i][j] = tab[i-1][j-1] + tab[i-1][j];   					     	   
            }   					     	   
        }   					     	   
    }   					     	   
   					     	   
    return tab;   					     	   
}   					     	   