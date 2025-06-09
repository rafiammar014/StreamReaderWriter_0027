#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukan nama file: ";
    cin >> NamaFile;

    // operasi file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file untuk membuka 
    outfile.open(NamaFile + ".txt");

    cout << ">= Menulis file, 'q' untuk keluar" << endl;

    //unlimited loop untuk menulis 
    while (true) {
        cout << "_ ";
        //mendapatkan setiap karakter dalam satu baris 
        getline(cin >> ws, baris); // cin >> ws untuk menghindari masalah newline
        //loop akan berhenti jika anda memasukan karakter q 
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file 
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya 
    outfile.close();

    //operasai file dalam mode membaca 
    ifstream infile;
    //menunjuk ke sebuah file untuk membuka 
    infile.open(NamaFile + ".txt");

    cout << endl << ">= Membuka dan membaca file " << endl;
    //jika ada file maka 
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris 
        while (getline(infile, baris))
        {
            //dan tampilkan disini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}
