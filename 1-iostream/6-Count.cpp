int count(std::string word, std::string text){   					     	   
   					     	   
    std::string::size_type n = 0;   					     	   
    std::string textTemp = text;   					     	   
    int res = 0;   					     	   
   					     	   
    while(n != std::string::npos){   					     	   
        n = textTemp.find(word);   					     	   
        std::cerr << textTemp << std::endl;   					     	   
   					     	   
        if(n != std::string::npos){   					     	   
            res++;   					     	   
            textTemp = textTemp.substr(n+1);   					     	   
        }   					     	   
    }   					     	   
   					     	   
    return res;   					     	   
}   					     	   