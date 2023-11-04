#include <iostream>
#include <vector>

using namespace std;
class NumberArray {
private:
    vector<int> array;

public:
    NumberArray(int size) {
        array.resize(size);
    }

    void fillArray() {
        for (int i = 0; i < array.size(); i++) {
            cout << "Enter value for index " << i << ": ";
            cin >> array[i];
        }
    }

    string search(int target) {
        for (int i = 0; i < array.size(); i++) {
            if (array[i] == target) {
                return to_string(target) + " found at index " + to_string(i);
            }
        }
        return to_string(target) + " not found in the array.";
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    NumberArray myArray(size);
    myArray.fillArray();

    int targetNumber;
    cout << "Enter the number to search for: ";
    cin >> targetNumber;

    string result = myArray.search(targetNumber);
    cout << result << endl;

    return 0;
}
