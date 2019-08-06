bool isHappy(int n){
    if (n <= 0 || ((1 < n)&&(n < 5)))
        return false;
    if (n == 1)
        return true;

    int a;
    int new = 0;

    while(n != 0){
        a = n % 10;
        new = new + a * a;
        n = (n - a) / 10;
    }


    return isHappy(new);

}
