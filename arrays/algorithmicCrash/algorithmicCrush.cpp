#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, M;
    int a, b, k;
    cin >> N >> M;
    
    vector<long long> tmp(N+1, 0), prefix(N,0);
    for (int i = 0; i < M; ++i) {
        cin >> a >> b >> k;
        tmp[a - 1] += k;
        tmp[b] -= k;
    }
    
    long long max = 0;
    for (int i = 0; i < N; ++i) {
        if (i > 0) {
            prefix[i] = prefix[i - 1];
        }
        prefix[i] += tmp[i];
        if (prefix[i] > max) {
            max = prefix[i];
        }
    }
    cout << max;
    return 0;
}