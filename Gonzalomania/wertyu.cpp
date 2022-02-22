// Wertyu - UVA 10082

#include <iostream>

using namespace std;

char index[256];
string keyboard = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

void fill() {
    for (int i = 0; i < keyboard.length(); i++) {
        if (keyboard[i] == '`' || keyboard[i] == 'Q' || keyboard[i] == 'A' || keyboard[i] == 'Z') {
            index[(int)keyboard[i]] = keyboard[i];
        }
        else {
            index[(int)keyboard[i]] = keyboard[i - 1];
        }
    }

    index[(int)' '] = ' ';
}

int main() {
    fill();
    string message;
    while (getline(cin, message, '\n')) {
        string result;
        for (int i = 0; i <= message.length(); i++) {
            result += index[int(message[i])];
        }

        cout << result << endl;
    }

    return 0;
}