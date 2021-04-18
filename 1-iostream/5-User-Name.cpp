#include <string>   					     	   
#include <iostream>   					     	   
   					     	   
int isValid(std::string s){   					     	   
    for(int i=0;i<s.size();i++)   					     	   
    {   					     	   
        char letter = s[i];   					     	   
        if(!(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')){   					     	   
            std::cerr << letter << " " << s.size();   					     	   
            return 0;   					     	   
        }   					     	   
    }   					     	   
    return 1;   					     	   
}   					     	   
   					     	   
int main(){   					     	   
    std::string lastname;   					     	   
    std::string firstname;   					     	   
   					     	   
    std::cin >> firstname;   					     	   
    std::cin >> lastname;   					     	   
   					     	   
    if(!isValid(firstname)){   					     	   
        std::cout << "\""<< firstname << "\"" << " is not a valid firstname";   					     	   
        return 0;   					     	   
    }   					     	   
    if(!isValid(lastname)){   					     	   
        std::cout << "\""<< lastname << "\"" << " is not a valid lastname";   					     	   
        return 0;   					     	   
    }   					     	   
   					     	   
    for(int i=0;i<lastname.size();i++){   					     	   
        if(i==7){   					     	   
            break;   					     	   
        }   					     	   
        std::cout << (char) std::tolower(lastname.at(i));   					     	   
    }   					     	   
    std::cout << (char)std::tolower(firstname.at(0));   					     	   
   					     	   
    return 0;   					     	   
}   					     	   