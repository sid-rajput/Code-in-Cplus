#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, rev = "";
    cout << "Enter the word to check palindrome: ";
    cin >> s;

    int n = (int)s.length();

    for (int i = (n-1); i >= 0 ; i--) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }

        rev += s[i];
    }
    cout << endl;

    if (s == rev) {
        cout << "It is a palindrome!" << endl;
    } else cout << "Not a palindrome.";


    return 0;
}
