int main() {    int x = 10;    int *ptr = &x;    *ptr = 20;    printf("%d\n", x); // Corrected: Added newline character for better output
    //Understanding:  The value of x is changed correctly via pointer dereferencing.
    return 0; }