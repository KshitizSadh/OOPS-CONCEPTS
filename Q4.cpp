#include <iostream>
using namespace std;

void showAddress(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        cout << "Character: " << str[i] << " Address: " << (void*)&str[i] << endl;
    }
}

void concatenateStrings(char* str1, char* str2, char* result) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}

int compareStrings(char* str1, char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int stringLength(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

void reverseString(char* str) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void insertString(char* str1, char* str2, int pos, char* result) {
    int i = 0, j = 0, k = 0;
    while (i < pos && str1[i] != '\0') {
        result[k++] = str1[i++];
    }
    while (str2[j] != '\0') {
        result[k++] = str2[j++];
    }
    while (str1[i] != '\0') {
        result[k++] = str1[i++];
    }
    result[k] = '\0';
}

int main() {
    int choice;
    char str1[100], str2[100], result[200];
    int position;

    do {
        cout << "\nMenu:\n";
        cout << "1. Show address of each character in string\n";
        cout << "2. Concatenate two strings\n";
        cout << "3. Compare two strings\n";
        cout << "4. Calculate length of the string\n";
        cout << "5. Convert all lowercase characters to uppercase\n";
        cout << "6. Reverse the string\n";
        cout << "7. Insert a string in another string at a specified position\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin.ignore();
                cin.getline(str1, 100);
                showAddress(str1);
                break;
            case 2:
                cout << "Enter first string: ";
                cin.ignore();
                cin.getline(str1, 100);
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                concatenateStrings(str1, str2, result);
                cout << "Concatenated string: " << result << endl;
                break;
            case 3:
                cout << "Enter first string: ";
                cin.ignore();
                cin.getline(str1, 100);
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                if (compareStrings(str1, str2) == 0) {
                    cout << "Strings are equal." << endl;
                } else {
                    cout << "Strings are not equal." << endl;
                }
                break;
            case 4:
                cout << "Enter a string: ";
                cin.ignore();
                cin.getline(str1, 100);
                cout << "Length of the string: " << stringLength(str1) << endl;
                break;
            case 5:
                cout << "Enter a string: ";
                cin.ignore();
                cin.getline(str1, 100);
                toUpperCase(str1);
                cout << "Uppercase string: " << str1 << endl;
                break;
            case 6:
                cout << "Enter a string: ";
                cin.ignore();
                cin.getline(str1, 100);
                reverseString(str1);
                cout << "Reversed string: " << str1 << endl;
                break;
            case 7:
                cout << "Enter the main string: ";
                cin.ignore();
                cin.getline(str1, 100);
                cout << "Enter the string to be inserted: ";
                cin.getline(str2, 100);
                cout << "Enter the position: ";
                cin >> position;
                insertString(str1, str2, position, result);
                cout << "Resulting string: " << result << endl;
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 8);

    return 0;
}
