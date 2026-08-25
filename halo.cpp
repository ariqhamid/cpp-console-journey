#include <iostream>
#include <ctime>

int main(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int jam = ltm->tm_hour;

    std::string nama;
    std::cout << "Masukan nama kamu : ";
    std::getline(std::cin, nama);
    
    std::string salam;
    if (jam >= 0 && jam < 10) salam = "Selamat pagi";
    else if (jam >= 10 && jam < 15) salam = "Selamat siang";
    else if (jam >= 15 && jam <= 19) salam = "Selamat sore";
    else salam = "Selamat malam";

    std::cout << "Halo " << nama << ", " << salam << std::endl;

    int month = ltm->tm_mon + 1;
    std::string monthName;
    
    if (month == 1) monthName = "Januari";
    else if (month == 2) monthName = "Februari";
    else if (month == 3) monthName = "Maret";
    else if (month == 4) monthName = "April";
    else if (month == 5) monthName = "Mei";
    else if (month == 6) monthName = "Juni";
    else if (month == 7) monthName = "Juli";
    else if (month == 8) monthName = "Agustus";
    else if (month == 9) monthName = "September";
    else if (month == 10) monthName = "Oktober";
    else if (month == 11) monthName = "November";
    else if (month == 12) monthName = "Desember";
    
    std::cout << "Tanggal : " << ltm->tm_mday << " " << monthName << " " << ltm->tm_year + 1900 << std::endl;
    std::cout << "Jam : " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << std::endl;

    std::cout << "\nTekan Enter untuk keluar... ";
    std::cin.get();
    return 0;
}