#include<bits/stdc++.h>

using namespace std;
int main() {

    int l1, r1, l2, r2;

    cin >> l1 >> r1 >> l2 >> r2;

    int lowerIntersect = max(l1, l2);
    int upperIntersect = min(r1, r2);

    (lowerIntersect <= upperIntersect) ?
    (cout << lowerIntersect << ' ' << upperIntersect) : cout << -1;

    return 0;
}
