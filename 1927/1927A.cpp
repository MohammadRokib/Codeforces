#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while(t--) {
        int n; char c;
        scanf("%d", &n);
        scanf("%c", &c);

        char str[n];
        int start = -1, end = -1;
        for (int i=0; i<n; i++) {
            scanf("%c", &str[i]);
            if (start<0 && str[i]=='B') {
                start = i; end = i;
            }
            else if (str[i]=='B') end = i;
        }

        printf("%d\n", end-start+1);
    }
    return 0;
}
