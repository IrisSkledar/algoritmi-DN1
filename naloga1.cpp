// Začetek naloge
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;


// Bere stevila iz datoteke primer_vhoda.txt
bool Branje_Stevil(vector<int> &vec, const char s[]) {
    ifstream input(s);
    int st;

    if (!input.is_open()) {
        return false;
    }

    while (!input.eof()) {
        input >> st;
        vec.push_back(st);
        while (isspace(input.peek())) input.get();
    }

    input.close();
    return true;
}




void Izpis_Stevil(int* polje, unsigned int velikost) {

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
