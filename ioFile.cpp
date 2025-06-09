#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // operasi file dalam mode menulis.
    ofstream outfiles;
    // menunjuk ke sebuah nama file untuk membuka 
    outfile.open("contoh.txt");

    cout << ">= Menulis file, \'q'\' untuk keluar" << endl;

    //unlimited loop untuk menulis 
    while (true) {
        cout << "_ ";
        //mendapatkan setiap karakter dalam satu baris 
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q 
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file 
        outfile << baris << endl;
    }
}
