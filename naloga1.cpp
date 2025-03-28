// Začetek naloge
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

bool Branje_Stevil(vector<int> &vec, const char s[]) {

}

void Izpis_Stevil(int* polje, unsigned int velikost) {

}
// Funkcija za pridobitev k-tega bita (k = 0 najmanj pomemben bit)
int getBit(unsigned char num, int k) {
    return (num >> k) & 1;
}

void countingSortByBit(vector<unsigned char>& A, int k) {
    int n = A.size();
    vector<unsigned char> output(n);
    vector<int> count(2, 0); 

    vector<int> bits(n);
    for (int i = 0; i < n; i++) {
        bits[i] = getBit(A[i], k);
        count[bits[i]]++;
    }

    count[1] += count[0];

    for (int i = n - 1; i >= 0; i--) {
        int b = bits[i];
        output[--count[b]] = A[i];
    }

    A = output;

}


int main(int argc, char* argv[]) { // Kako zaženemo program v konzoli
    if (argc != 2) {
        cerr << "Uporaba: " << argv[0] << " <vhodna_datoteka>" << endl;
        return 1;
    }

    return 0;
}
