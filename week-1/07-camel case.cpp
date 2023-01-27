#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <queue>
#include<set>
#include<unordered_map>
#include<string>
#include<cmath>
#include<iomanip>
#define mod 1000000007;
using namespace std;
bool isUppercase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return true;
    }
    return false;
}
bool isLowercase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return true;
    }
    return false;
}
void split(string &s, string& result, int n) {
    for (int i = 4; i < n; i++) {
        if (isUppercase(s[i])) {
            char c = char(tolower(s[i]));
            // if the first char is uppercase, then we won't insert space
            // if not, insert space
            if (i != 4) {
                result += ' ';
            }
            result += c;
        }
        else if (s[i] != '(' && s[i] != ')') {
            result += s[i];
        }

    }
}
void combine(string& s, string& result, char method) {
    int n = s.size();
    if (method == 'C') {
        for (int i = 4; i < n; i++) {
            // first char will always be upper case
            // if previous char is ' ', then convert it current to uppercase
            if (i == 4 || s[i - 1] == ' ') {
                char c = char(toupper(s[i]));
                result += c;
            }
            // do nothing if it's empty space
            else if (s[i] == ' ') {
                continue;
            }
            else {
                result += s[i];
            }
        }
    }
    else {
        for (int i = 4; i < n; i++) {
            // first char can't be uppercase
            // previous char has to be empty space
            if (i != 4 && s[i - 1] == ' ') {
                result += char(toupper(s[i]));
            }
            else if (s[i] != ' ') {
                result += s[i];
            }
        }
        // if we havd to convert it to method, we have add () at the end
        if (method == 'M') {
            result += "()";
        }
    }
}
void camelCase4(string& s, string &result) {
    char operation = s[0];
    char method = s[2];
    // in split operatin no matter what, convert
    // all words into lower case
    int n = s.size();
    if (operation == 'S') {
        if (method == 'M' || method == 'V' || method == 'C') {
            split(s, result, s.size());
        }
    }
    else {
        combine(s, result, method);
    }
}




int main() {
    string s,output;
    while (getline(cin, s)) {
        output = "";
        // it helps to loop break
        s.erase(remove(s.begin(), s.end(), '\r'), s.end());
        camelCase4(s, output);
        cout << output << endl;

    }
    
    return 0;
};
