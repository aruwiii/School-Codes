#include <iostream>
using namespace std;

class StringOperations {
public:
	
char s1[100], s2[100];
int choice;

int string_length(char* str){
    int len = 0;
    while (str[len]!= '\0') {
        len++;
    }
    return len;
}

int string_compare(char* s1, char* s2){
    while (*s1!= '\0' && *s2!= '\0') {
        if (*s1!= *s2) {
            return 1; 
        }
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 == '\0') {
        return 0;
    }
    return 1; 
}

void string_concatenate(char* first, const char* second){
	while(*first){
		++first;
	}
	while ((*first++=*second++));
		
	}

void display_program(){
	cout << "What do you want to do?" << endl;
    cout << "1. Find the string length" << endl;
    cout << "2. Compare 2 strings" << endl;
    cout << "3. Concatenate 2 strings" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

	switch (choice) {
        case 1:
            cout << "Enter a string: ";
            cin.ignore();
            cin.getline(s1, sizeof(s1));
            cout << "Length of the string is: " << string_length(s1) << endl;
            break;
        case 2:
            cout << "Enter the first string: ";
            cin>>s1;
            cout << "Enter the second string: ";
            cin>>s2;
            if (string_compare(s1, s2) == 0) {
                cout << "The strings are equal." << endl;
            } else {
            cout << "The strings are not equal." << endl;
            }
            break;
        case 3:
            cout << "Enter the first string: ";
            cin>>s1;
            cout << "Enter the second string: ";
            cin>>s2;
            string_concatenate(s1, s2);
            cout << "Concatenated string is: " << s1 << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
	
}

};

int main() {
 
StringOperations technical;
technical.display_program();

    return 0;
}

