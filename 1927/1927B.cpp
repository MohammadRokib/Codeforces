#include <bits/stdc++.h>
using namespace std;

char letter(int value, int alphabets[]) {
    for (int i=0; i<26; i++) {
        if (alphabets[i] == value) {
            alphabets[i]++;
            return 'a'+i;
        }
    }
    return 'a';
}

int main() {
    freopen("../input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while(t--) {
        int alphabets[26] = {0};

        int n;
        scanf("%d", &n);

        int ara[n]; string str = "";
        for (int i=0; i<n; i++) {
            scanf("%d", &ara[i]);

            str += letter(ara[i], alphabets);
        }
        cout << str << endl;
    }
    return 0;
}
