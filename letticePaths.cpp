int foo (int n, int m) {
    if (m == 0 || n == 0) {
        return 1;
    }
    return foo(m - 1, n) + foo(m, n - 1);
}
