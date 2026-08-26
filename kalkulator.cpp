#include <iostream>
#include <limits>
#include <sstream>
#include <iomanip>


int main(){

    double num1, num2;
    std::string operasi;

    std::cout << " KALKULATOR SEDERHANA     \n";
    std::cout << " >> input operasi         \n";
    std::cout << " (+, -, *, /)             \n";
    std::cout << " >> q/Q (untuk keluar)    \n";
    std::cout << " >> n/N (untuk all clear) \n\n";
    
    while(true){

    std::cout << "input bilangan : ";
    while(!(std::cin >> num1)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input tidak valid\ninput bilangan : ";
    }

    while(true){

    std::cout << ">> ";
    std:: cin >> operasi;

    if(operasi == "+" || operasi == "-" || operasi == "*" || operasi == "/"){

        std::cout << "input bilangan : ";
        while(!(std::cin >> num2)) {
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          std::cout << "Input tidak valid\ninput bilangan : ";
        }

        if (operasi == "/" && num2 == 0) {
             std::cout << "Error: Tidak bisa membagi dengan nol!\n\n";
             continue; 
        }

        if(operasi == "+") num1 += num2;
        else if(operasi == "-") num1 -= num2;
        else if(operasi == "*") num1 *= num2;
        else if(operasi == "/") num1 /= num2;

        std::stringstream ss;
        ss << std::fixed << std::setprecision(7) << num1;
        std::string hasilStr = ss.str();

        while (hasilStr.back() == '0') {
            hasilStr.pop_back();
        }
        
        if (hasilStr.back() == '.') {
            hasilStr.pop_back();
        }

        std::cout << "hasil = " << hasilStr << std::endl;

    }
    else if(operasi == "q" || operasi == "Q"){
        break;
    }
    else if(operasi == "n" || operasi == "N"){
        std::cout << "\n====All Clear====\n\n";
        break;
    }
    else{
        std::cout << "operasi tidak valid, pilih (+ atau - atau / atau *)\n";
    }
}

    if(operasi == "q" || operasi == "Q"){
        std::cout << "\n=== Selesai ===\n\n";
        break;
    }
}
    return 0;
}