#include <string>   					     	   
#include <iostream>   					     	   
#include <iomanip>   					     	   
   					     	   
int  main(){   					     	   
    int entier = 0;   					     	   
    std::cin >> entier;   					     	   
   					     	   
    for(int i=1;i<=10;i++){   					     	   
        std::cout << std::setw(5) << i ;   					     	   
        std::cout << " x ";   					     	   
        std::cout << std::setw(5) << entier ;   					     	   
        std::cout << " = " ;   					     	   
        std::cout << std::setw(5) << i*entier << std::endl;   					     	   
    }   					     	   
    return 0;   					     	   
}   					     	   