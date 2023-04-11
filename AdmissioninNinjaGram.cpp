#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
   if(str.length()<26)return false;
     string lowerStr = "";
    for (int i  = 0; i < str.length(); i++){
        lowerStr += tolower(str[i]);
    }
 
    int count[26]  = {0};
    
    for (int i  = 0 ; i < lowerStr.length(); i++){
        count[lowerStr[i] - 'a']++;
    }
    for (int i = 0 ; i < 26; i++){
        if(count[i] == 0){
            return false;
        }
    }
    return true;
}
