#include <iostream>
using namespace std;

int main() {
    int m, n, x, y;
    cin >> m >> n;
    char arr[m][n];

    // Read grid
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cin >> x >> y;
    bool allNonDot = true;

    // Check all 8 neighbors manually
    // Top-left (x-1, y-1)
    if (x-1 >= 0 && y-1 >= 0 && arr[x-1][y-1] == '.') allNonDot = false;
    // Top (x-1, y)
    if (x-1 >= 0 && arr[x-1][y] == '.') allNonDot = false;
    // Top-right (x-1, y+1)
    if (x-1 >= 0 && y+1 < n && arr[x-1][y+1] == '.') allNonDot = false;
    // Left (x, y-1)
    if (y-1 >= 0 && arr[x][y-1] == '.') allNonDot = false;
    // Right (x, y+1)
    if (y+1 < n && arr[x][y+1] == '.') allNonDot = false;
    // Bottom-left (x+1, y-1)
    if (x+1 < m && y-1 >= 0 && arr[x+1][y-1] == '.') allNonDot = false;
    // Bottom (x+1, y)
    if (x+1 < m && arr[x+1][y] == '.') allNonDot = false;
    // Bottom-right (x+1, y+1)
    if (x+1 < m && y+1 < n && arr[x+1][y+1] == '.') allNonDot = false;

    cout << (allNonDot ? "yes" : "no") << endl;
    return 0;
}
