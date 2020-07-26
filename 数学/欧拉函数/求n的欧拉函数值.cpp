gg euler_phi(gg n) {
    gg m = (gg)sqrt(n + 0.5), ans = n;
    for (gg i = 2; i <= m; i++)
        if (n % i == 0) {
            ans = ans / i * (i - 1);
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        ans = ans / n * (n - 1);
    return ans;
}
