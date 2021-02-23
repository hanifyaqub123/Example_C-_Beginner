#include <iostream>

using namespace std;

int main()
{
    char result = 'y';

    do
    {
        printf("\033c");
        int numberSelect;

        cout << "Selamat datang di kalkulator sederhana\n";
        cout << "Fitur Sederhana Perkalian, Penambahan dan Pembagian\n";
        cout << "Pilih 1 untuk Perkalian, ";
        cout << "Pilih 2 untuk Penambahan, ";
        cout << "Pilih 3 untuk Pembagian, ";
        cout << "Pilih 0 untuk Keluar\n";

        cin >> numberSelect;

        if (numberSelect == 1)
        {
            int a, b;
            printf("\033c");
            cout << "Selamat datang di Perkalian" << endl;
            cout << "Masukan Bilangan Pertama " << endl;
            cin >> a;
            cout << "Masukan Bilangan Kedua " << endl;
            cin >> b;
            int perkalian = a * b;
            cout << "Hasilnya adalah : " << perkalian << endl;
            cout << "Apakah ingin mencoba lagi ? 'y' or 'n' \n";
            cin >> result;
        }
        else if (numberSelect == 2)
        {
            int a, b;
            printf("\033c");
            cout << "Selamat datang di Penambahan" << endl;
            cout << "Masukan Bilangan Pertama " << endl;
            cin >> a;
            cout << "Masukan Bilangan Kedua " << endl;
            cin >> b;
            int penambahan = a + b;
            cout << "Hasilnya adalah : " << penambahan << endl;
            cout << "Apakah ingin mencoba lagi ? 'y' or 'n' \n";
            cin >> result;
        }
        else if (numberSelect == 3)
        {
            int a, b;
            printf("\033c");
            cout << "Selamat datang di Pembagian" << endl;
            cout << "Masukan Bilangan Pertama " << endl;
            cin >> a;
            cout << "Masukan Bilangan Kedua " << endl;
            cin >> b;
            int pembagian = a / b;
            cout << "Hasilnya adalah : " << pembagian << endl;
            cout << "Apakah ingin mencoba lagi ? 'y' or 'n' \n";
            cin >> result;
        }
        else if (numberSelect == 0)
        {
            result = 'n';
        }
    } while (result != 'n');
}