const int N = 1e6 + 5;
bool composite[N];
int prime[N], sz;

void sieve() {
    for (int i = 2; i < N; i++) {
        if (!composite[i])prime[sz++] = i;
        for (int j = 0; j < sz && i * prime[j] < N; j++) {
            composite[i * prime[j]] = true;
            if (i % prime[j] == 0)break;
        }
    }
}