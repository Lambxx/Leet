

int trailingZeroes(int n) {
   int ff = 5;
   int total =0;
   while (ff <= n){
    total += floor(n/ff);
    ff *= 5;

   }
   return total;
}