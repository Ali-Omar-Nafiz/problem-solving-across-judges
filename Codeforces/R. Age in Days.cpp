#include<bits/stdc++.h>

using namespace std;
int main() {
    int ageInDays; cin >> ageInDays;
    int years = ageInDays / 365;
    cout << years << " years\n";

    ageInDays %= 365;
    int months = ageInDays / 30;
    cout << months << " months\n";

    ageInDays %= 30;
    cout << ageInDays << " days";
}
