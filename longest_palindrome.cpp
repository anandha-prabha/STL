//C++ program that finds the longest palindrome in a given string using the STL string and algorithms.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//function to check the str is palindrome or not
bool ispalindrome(const string& str)
{
    return str == string(str.rbegin(), str.rend());
}
//function to find the longest palindrome in given string
string longestpalindrome(const string& a)
{
    string palindrome;
    for (size_t i = 0; i < a.size(); ++i) {
        for (size_t j = i; j < a.size(); ++j) {
            string substring = a.substr(i, j - i + 1);
            if (ispalindrome(substring) && substring.size() > palindrome.size()) {
                palindrome = substring;
            }
        }
    }
    return palindrome;
}

int main() {
    string a;
    cout << "Enter a string: ";
    getline(cin, a);
    string result = longestpalindrome(a);
    if (result.empty())//checks if the result is empty (0) and prints no palindrome found
    {
        cout << "No palindrome found." << endl;
    }
    else              //else the longest palindrome is printed
    {
        cout << "Longest palindrome: " << result<< endl;
    }
    return 0;
}
