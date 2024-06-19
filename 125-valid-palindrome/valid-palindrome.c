bool isPalindrome(char* s) {
   

    char* sEnd = s + strlen(s) -1;
    char* fVal = s;
    
    while(*s && *sEnd && (s<sEnd) ){
        while (*s && !isalnum(*s) && (s<sEnd)){
            s++;
        } 
         while ( *sEnd && (s<sEnd) && !isalnum(*sEnd) && (sEnd > fVal)){
            sEnd--;
        } 
       
       if(s<sEnd){
        if(toupper(*s) != toupper(*sEnd)){
            return false;
        }
        s++;
       sEnd--;
        }
       
        
    }
    return true;

}