std::string replace(std::string text, std::string oldWord, std::string newWord){   					     	   
   					     	   
    std::string::size_type n = text.find(oldWord);   					     	   
    if(n != std::string::npos){   					     	   
        text.replace(n, oldWord.size(), newWord);   					     	   
    }   					     	   
   					     	   
    return text;   					     	   
}   					     	   