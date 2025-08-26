#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s1 = "Hello", s2 = "World";

    // (a) Concatenate
    cout << "Concatenated: " << s1 + s2 << endl;

    // (b) Reverse
    reverse(s1.begin(), s1.end());
    cout << "Reversed: " << s1 << endl;

    // (c) Delete vowels
    string str = "HelloWorld";
    string noVowels = "";
    for (char c : str) {
        if (tolower(c) != 'a' && tolower(c) != 'e' &&
            tolower(c) != 'i' && tolower(c) != 'o' &&
            tolower(c) != 'u')
            noVowels += c;
    }
    cout << "Without vowels: " << noVowels << endl;

    // (d) Sort strings
    string arr[] = {"banana", "apple", "cherry"};
    int n = 3;
    sort(arr, arr + n);
    cout << "Sorted: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // (e) Uppercase to lowercase
    char ch = 'A';
    cout << "Lowercase: " << (char)tolower(ch) << endl;

    return 0;
}
