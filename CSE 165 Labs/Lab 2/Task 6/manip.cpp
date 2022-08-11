#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int toBits(int n) {
    bitset<8> bits(n);
    
    return stoi(bits.to_string());
}

int getBit(int n, int index) {
    bitset<8> bits(n);
    return bits[index];
}

int setBit(int n, int index) {
    bitset<8> bits(n);
    bits.set(index);

    return stoi(bits.to_string());
}

int clearBit(int n, int index) {
    bitset<8> bits(n);
    bits.reset(index);

    return stoi(bits.to_string());
}

int main() {
    int input, index;
    cin >> input;
    cin >> index;

    cout << "Binary representation of " << input << " is: " << toBits(input) << endl;
    cout << "Get bit at position " << index << ": " << getBit(input, index) << endl;
    cout << "Binary representation after setting bit at position " << index << ": " << setBit(input, index) << endl;
    cout << "Binary representation after clearing bit at position " << index << ": " << clearBit(input, index) << endl;
}