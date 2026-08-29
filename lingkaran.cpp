#include <iostream>
#include <limits>
#include <sstream>
#include <iomanip>

int main(){
    double hasil, r;
    const double PI = 3.141592653589793;
    std::cout << "PROGRAM MENGHITUNG LUAS LINGKARAN\n";
    std::cout << "masukan jari-jari : ";
    while(!(std::cin >> r)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "input tidak valid\nmasukan jari-jari : ";
    }
    hasil = PI * r * r;

    std::stringstream ss;
    ss << std::fixed << std::setprecision(7) << hasil;
    std::string hasilStr = ss.str();

    while (hasilStr.back() == '0') {
            hasilStr.pop_back();
        }
        
        if (hasilStr.back() == '.') {
            hasilStr.pop_back();
        }
        
    std::cout << hasilStr << std::endl;

    return 0;
}