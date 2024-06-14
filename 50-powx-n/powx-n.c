double myPow(double x, int n) {
    if (x == 1 || x == 0){
        return x;

    } 
    if (n == 0){
        return 1.0;
    }
    double final = 1;

     long long exp = n; // Use long long to handle the case when n is INT_MIN
    if (exp < 0) {
        x = 1 / x;
        exp = -exp;
    }
    while (exp > 0){
        if ((exp % 2) == 1){
            // Odd exponent
        final = final * x;
        exp--; } 
        // Now is even exp
        // div exp by 2, x = x * x, since x^16 = (x*x)^8
        exp = exp / 2;
        x = x * x;


    }
      return final;
        
    }
    

    