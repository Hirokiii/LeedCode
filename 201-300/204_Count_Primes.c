bool isPrime(int num){
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;

    return true;
}

int countPrimes(int n){
    if (n <= 0) return 0;
    bool isPrime[n];
    for(int i = 2; i < n; i++)
        isPrime[i] = true;

    for (int i = 2; i * i < n; i++){
        if (!isPrime[i]) continue;
        for (int j = i * i; j < n; j += i){
            isPrime[j] = false;
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++)
        if (isPrime[i]) count++;

    return count;
}

/*
Runtime: 36 ms, faster than 51.36% of C online submissions for Count Primes.
Memory Usage: 8.2 MB, less than 25.00% of C online submissions for Count Primes.
*/
