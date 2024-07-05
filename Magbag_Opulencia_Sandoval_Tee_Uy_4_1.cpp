#include <iostream>
#include <stack>
using namespace std;

int MinimumReplacements(string str) {
    stack<char> s;
    int replacements = 0;

    for(char c : str) {
        if(c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else {
            if(s.empty()) {
                replacements++;
            } else {
                char top = s.top();
                s.pop();

                if((c == ')' && top!= '(') ||
                   (c == '}' && top!= '{') ||
                   (c == ']' && top!= '[')) {
                    replacements++;
                }
            }
        }
    }

    while(!s.empty()) {
        replacements++;
        s.pop();
    }

    return replacements;
}

int main() {
    string input;
    cout << "Enter a string of braces:\n";
    getline(cin, input);

    int replacements = MinimumReplacements(input);
    cout << "Minimum number of replacements required: " << replacements << endl;

    return 0;
}

