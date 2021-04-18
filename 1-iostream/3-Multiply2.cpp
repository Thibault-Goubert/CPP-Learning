#include <string>   					     	   
#include <iostream>   					     	   
#include <iomanip>   					     	   
   					     	   
int  main(){   					     	   
    int entier = 0;   					     	   
    std::cin >> entier;   					     	   
   					     	   
    for(int i=1;i<=10;i++){   					     	   
        std::cout << std::setw(5) << std::left << i ;   					     	   
        std::cout << " x ";   					     	   
        std::cout << std::setw(5) << std::left << entier ;   					     	   
        std::cout << " = " ;   					     	   
        std::cout << std::setw(5) << std::left << i*entier << std::endl;   					     	   
    }   					     	   
    return 0;   					     	   
}   					     	   