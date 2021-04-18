bool operator>(const Test& t1, const Test& t2){   					     	   
   //completer   					     	   
   return t2 < t1;   					     	   
}   					     	   
bool operator<=(const Test& t1, const Test& t2){   					     	   
    //completer   					     	   
    return !(t2<t1);   					     	   
}   					     	   
bool operator>=(const Test& t1, const Test& t2){   					     	   
   //completer   					     	   
    return !(t1<t2);   					     	   
}   					     	   
bool operator==(const Test& t1, const Test& t2){   					     	   
    //completer   					     	   
    return !(t1<t2 || t2<t1);   					     	   
}   					     	   
bool operator!=(const Test& t1, const Test& t2){   					     	   
    //completer   					     	   
    return !(t1==t2);   					     	   
}   					     	   