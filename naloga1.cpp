// Začetek naloge
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

bool Branje_Stevil(vector<int> &vec, const char s[]) {

}

void Izpis_Stevil(int* polje, unsigned int velikost) {
    ofstream output("out.txt");

    for (unsigned int i = 0; i < velikost; i++) {
        output << polje[i];
        if (i < velikost - 1) output << ' ';
    }

    output << endl;

}

int getBit(unsigned char num, int k) {

}

void countingSortByBit(vector<unsigned char>& A, int k) {

}


int main(int argc, char* argv[]) { // Kako zaženemo program v konzoli
    if (argc != 2) {
        cerr << "Uporaba: " << argv[0] << " <vhodna_datoteka>" << endl;
        return 1;
    }

    return 0;
}
