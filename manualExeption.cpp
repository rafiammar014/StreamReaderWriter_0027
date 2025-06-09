#include <iostream>
using namaspace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka 
        cout << "Pernyataan itidak akan dieksekusi" << endl;
    }
}