#include "Node.hpp"   					     	   
#include "Leaf.hpp"   					     	   
#include "InternalNode.hpp"   					     	   
#include <iostream>   					     	   
#include <string>   					     	   
#include <memory>   					     	   
   					     	   
std::shared_ptr<Node> test(std::string s, int& i){   					     	   
    i++;   					     	   
    if(s[i]=='+'||s[i]=='-'||s[i]=='x'){   					     	   
        char c = s[i];   					     	   
        std::shared_ptr<Node> res(new InternalNode(test(s,i),test(s,i),c));   					     	   
        return res;   					     	   
    }   					     	   
    else{   					     	   
        std::shared_ptr<Node> res(new Leaf(s[i]-'0'));   					     	   
        return res;   					     	   
    }   					     	   
}   					     	   
   					     	   
int main(){   					     	   
    std::string s;   					     	   
    std::cin >> s;   					     	   
    std::cerr << s;   					     	   
   					     	   
    if(s.length()==1){   					     	   
        std::cout << s[0]-'0';   					     	   
        return 0;   					     	   
    }   					     	   
   					     	   
    int i=0;   					     	   
    std::shared_ptr<Node> in(new InternalNode(test(s,i),test(s,i),s[0]));   					     	   
   					     	   
    std::cout << in->getResult();   					     	   
    return 0;   					     	   
}   					     	   