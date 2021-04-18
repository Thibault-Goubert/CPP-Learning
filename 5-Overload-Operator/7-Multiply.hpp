std::string operator*(std::string& s, int v){   					     	   
    std::string res;   					     	   
    for(int i=0;i<v;i++){   					     	   
        res += s;   					     	   
    }   					     	   
    return res;   					     	   
}   					     	   
   					     	   
std::string operator*(int v, std::string& s){   					     	   
    return s*v;   					     	   
}   					     	   