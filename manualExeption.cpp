#include <iostream>
using namaspace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka 
        cout << "Pernyataan itidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi 
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "Default Pengecualian dieksekusi" << endl;
    }

    return0;
}