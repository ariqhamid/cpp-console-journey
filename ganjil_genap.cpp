#include <iostream>
#include <limits>

int main() {
    int angka, hasil;
    std::string pilihan;

    while(true){

        while(true){

            std::cout << "masukan angka: ";
            std::cin >> angka;

            if(std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Input tidak valid! Masukan bilangan bulat\n";
                continue;
            }

            char sisaBuffer;
            if (std::cin.get(sisaBuffer) && sisaBuffer != '\n'){
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Input tidak valid! Masukan bilangan bulat\n";
                continue;
            }

            break;
        }

        hasil = angka % 2;

        if(hasil == 0){std::cout << angka << " adalah genap" << std::endl;}
        else {std::cout << angka << " adalah ganjil" << std::endl;}

        while(true){
            std::cout << "\ncek angka lain? (y/n): ";
            std::cin >> pilihan;

            if(pilihan == "y" || pilihan == "Y"){
                break;
            }
            else if(pilihan == "n" || pilihan == "N"){
                break;
            }
            else {
                std::cout << "\ninput tidak valid";
            }
        }

        if(pilihan == "y" || pilihan == "Y"){
            std::cout << std::endl;
            continue;
        }            
        else if(pilihan == "n" || pilihan == "N"){
            std::cout << "\nSelesai\n";
            break;
        }
    }

    return 0;
}