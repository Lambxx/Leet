bool isPalindrome(int x) {

if (x<0){
    return false;
}
if(x<10){
    return true;
}
    int r = 1;
    int z = x;
       
    while (x > 9) {
        x /= 10;
        r++;
    }

    char s[100];
    sprintf(s, "%d", z);
    int y = r;
    y--;
    for (int i = 0; i < r; i++) {
        if (s[i] != s[y]) {
          return false; 
        }
        y--;
    }
    return true;
}