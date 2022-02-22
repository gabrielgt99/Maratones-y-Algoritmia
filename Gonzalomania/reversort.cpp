// Reversort

#include <iostream>

using namespace std;

int calcMinIndex(int* elements, int length, int index) {
    int minPos = 101;
    int pos;
    for (int i = index; i < length; i++) {
        if (minPos > elements[i]) {
            minPos = elements[i];
            pos = i;
        }
    }

    return pos;
}

void reverSort(int* elements, int begin, int end) {
    int aux = end;
    int length = (end / 2);

    for (int i = begin; i < length; i++) {
        int auxValue = elements[i];
        elements[i] = elements[aux];
        elements[aux] = auxValue;
        aux--;
    }
}

int main() {
    int cases;
    while (cin >> cases) {
        for (int i = 0; i < cases; i++) {
            int numElements;
            cin >> numElements;
            int elements[numElements];
            for (int j = 0; j < numElements; j++) {
                cin >> elements[j];
            }

            int count = 0;
            for (int j = 0; j < numElements - 1; j++) {
                int minIndex = calcMinIndex(elements, numElements, j);

                reverSort(elements, j, minIndex);
                count += (minIndex + 1) - j;
            }
            cout << count << endl;
        }
    }

    return 0;
}