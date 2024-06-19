bool isPalindrome(char* s) {
   

    char* sEnd = s + strlen(s) -1; // Set end pointer to final char
    char* fVal = s; // fVal keeps track of first pointer val
    
    while(*s && *sEnd && (s<sEnd) ){ // While both pointers point at a character and s pointer is less than end 
        while (*s && !isalnum(*s) && (s<sEnd)){
            s++; // Increment start to until its an AlphaNumeric Value
        } 
         while ( *sEnd && (s<sEnd) && !isalnum(*sEnd) && (sEnd > fVal)){
            sEnd--;
            // Decrement start to until its an AlphaNumeric Value
        } 
       
       if(s<sEnd){
        // Check s pointer is less than end 
        if(toupper(*s) != toupper(*sEnd)){
            return false;
            // If dont match return false 
        }
        s++;
       sEnd--;
        }
       
        
    }
    return true;
    // Is a palindrome 

}