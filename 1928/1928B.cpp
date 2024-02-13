#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int ara[n];
        for(int i=0; i<n; i++)
            scanf("%d", &ara[i]);
        sort(ara, ara+n);

        int p = 0;
        for (int i=1; i<n; i++)
            if (ara[p] != ara[i]) swap(ara[++p], ara[i]);

        int ans = 1, k = 0;
        for (int i=1; i<=p; i++) {
            if (ara[i]-ara[k] < n) ans = max(ans, i-k+1);
            else k++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
