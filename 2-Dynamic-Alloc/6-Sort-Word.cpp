#include <set>   					     	   
#include <algorithm>   					     	   
#include <iostream>   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
void display(string mot){   					     	   
    cout << mot << endl;   					     	   
}   					     	   
   					     	   
int main(){   					     	   
    int N;   					     	   
    cin >> N;   					     	   
   					     	   
    set<string> mots;   					     	   
    for(int i=0;i<N;i++){   					     	   
   					     	   
        string mot;   					     	   
        cin>>mot;   					     	   
        mots.insert(mot);   					     	   
    }   					     	   
   					     	   
    for_each(mots.begin(),mots.end(), &display);   					     	   
   					     	   
    return 0;   					     	   
}   					     	   