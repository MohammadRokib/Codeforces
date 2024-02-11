#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        if ((a%2==0 && b*2!=a) || (b%2==0 && a*2!=b)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
