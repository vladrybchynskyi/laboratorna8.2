#include <iostream>
#include <string>
using namespace std;

// Функція для знаходження останнього слова, яке починається на задану букву
bool findLastWordStartingWithLetter(const string& str, char letter, string& result) {
    string word;
    bool found = false;

    for (size_t i = 0; i <= str.size(); ++i) {
        if (i < str.size() && !isspace(str[i])) {
            word += str[i];  // Додаємо символ до поточного слова
        } else if (!word.empty()) {
            // Перевіряємо, чи слово починається з вказаної букви
            if (word[0] == letter) {
                result = word;
                found = true;
            }
            word.clear(); // Очищаємо слово для наступного
        }
    }
    return found;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string lastWordStartingWithA;
    bool found = findLastWordStartingWithLetter(input, 'a', lastWordStartingWithA);

    if (found) {
        cout << "The last word starting with 'a' is: " << lastWordStartingWithA << endl;
    } else {
        cout << "No word starting with 'a' found in the input." << endl;
    }

    return 0;
}
