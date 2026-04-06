#include <iostream>
#include <string>
using namespace std;

int main() {
    string input,s1,s2;
    cin >> input;
    char op;
    for(int i=0;i<input.length();i++){
        if(!(isdigit(input[i]))){
        op=input[i];
        for(int j=i+1;j<input.length();j++)s2+=input[j];
        }
    s1+=input[i];
    }
    int A = stoi(s1);
    int B = stoi(s2);

    switch(op) {
        case '+': cout << A + B << endl; break;
        case '-': cout << A - B << endl; break;
        case '*': cout << A * B << endl; break;
        case '/': cout << A / B << endl; break; 
    }

    return 0;
}
