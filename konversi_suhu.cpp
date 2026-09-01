#include <iostream>
#include <limits>
 
int main(){

    double c, f, k, r;

    int asal, tujuan;
    double suhu, hasil;
    std::string pilih;
    std::string satuan[4] = {"°C", "°F", "K", "°R"};

    while(true){
    std::cout << std::endl;

    std::cout << "=== KONVERSI SUHU (asal) ===\n";
    std::cout << "pilih suhu >> asal << : \n";
    std::cout << "1. Celcius\n";
    std::cout << "2. Fahrenheit\n";
    std::cout << "3. Kelvin\n";
    std::cout << "4. Reamur\n";

    while (true) {
    std::cout << "pilih (1-4) : ";
    std::cin >> asal;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input tidak valid!n\npilih (1-4) : \n";
        continue; 
    }
    if (asal < 1 || asal > 4) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Pilihan harus 1, 2, 3, atau 4.\npilih (1-4) : \n";
        continue; 
    }
    break;
}

    std::cout << std::endl;

    std::cout << "=== KONVERSI SUHU (tujuan) ===\n";
    std::cout << "pilih suhu >> tujuan << : \n";
    std::cout << "1. Celcius\n";
    std::cout << "2. Fahrenheit\n";
    std::cout << "3. Kelvin\n";
    std::cout << "4. Reamur\n";

    while (true) {
    std::cout << "pilih (1-4) : ";
    std::cin >> tujuan;
    
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input tidak valid! Masukan angka\n";
        continue; 
    }
    if (asal < 1 || asal > 4) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Pilihan harus 1, 2, 3, atau 4.\n";
        continue; 
    }
    break;
}

    std::cout << std::endl;

    pilih = "l";

    while(true){

        if (pilih == "l" || pilih == "l"){

        if(asal == 1 && tujuan == 2){
            std::cout << ">> Celcius ke Fahrenheit\n";
            std::cout << "input suhu Celcius : ";
            std::cin >> suhu;
            // celcius ke fahrenheit
            hasil = (suhu * 9/5) + 32;
            std::cout << suhu << satuan[0] << " = " << hasil << satuan[1] << std::endl;
        }
        else if(asal == 1 && tujuan == 3){
            std::cout << ">> Celcius ke Kelvin\n";
            std::cout << "input suhu Celcius : ";
            std::cin >> suhu;
            // celcius ke kelvin
            hasil = suhu + 273.15;
            std::cout << suhu << satuan[0] << " = " << hasil << satuan[2] << std::endl;
        }
        else if(asal == 1 && tujuan == 4){
            std::cout << ">> Celcius ke Reamur\n";
            std::cout << "input suhu Celcius : ";
            std::cin >> suhu;
            // celcius ke reamur
            hasil = suhu * 4/5;
            std::cout << suhu << satuan[0] << " = " << hasil << satuan[3] << std::endl;
        }

        else if(asal == 2 && tujuan == 1){
            std::cout << ">> Fahrenheit ke Celcius\n";
            std::cout << "input suhu Fahrenheit : ";
            std::cin >> suhu;
            // fahrenheit ke celcius
            hasil = (suhu - 32) * 5/9;
            std::cout << suhu << satuan[1] << " = " << hasil << satuan[0] << std::endl;
        }
        else if(asal == 2 && tujuan == 3){
            std::cout << ">> Fahrenheit ke Kelvin\n";
            std::cout << "input suhu Fahrenheit : ";
            std::cin >> suhu;
            // fahrenheit ke kelvin
            hasil = (suhu - 32) * 5/9 + 273.15;
            std::cout << suhu << satuan[1] << " = " << hasil << satuan[2] << std::endl;
        }
        else if(asal == 2 && tujuan == 4){
            std::cout << ">> Fahrenheit ke Reamur\n";
            std::cout << "input suhu Fahrenheit : ";
            std::cin >> suhu;
            // fahrenheit ke reamur
            hasil = (suhu - 32) * 4/9;
            std::cout << suhu << satuan[1] << " = " << hasil << satuan[3] << std::endl;
        }

        else if(asal == 3 && tujuan == 1){
            std::cout << ">> Kelvin ke Celcius\n";
            std::cout << "input suhu Kelvin : ";
            std::cin >> suhu;
            // kelvin ke celcius
            hasil = suhu - 273.15;
            std::cout << suhu << satuan[2] << " = " << hasil << satuan[0] << std::endl;
        }
        else if(asal == 3 && tujuan == 2){
            std::cout << ">> Kelvin ke Fahrenheit\n";
            std::cout << "input suhu Kelvin : ";
            std::cin >> suhu;
            // kelvin ke fahrenheit
            hasil = (suhu - 273.15) * 9/5 + 32;
            std::cout << suhu << satuan[2] << " = " << hasil << satuan[1] << std::endl;
        }
        else if(asal == 3 && tujuan == 4){
            std::cout << ">> Kelvin ke Reamur\n";
            std::cout << "input suhu Kelvin : ";
            std::cin >> suhu;
            // kelvin ke reamur
            hasil = (suhu - 273.15) * 4/5;
            std::cout << suhu << satuan[2] << " = " << hasil << satuan[3] << std::endl;
        }

        else if(asal == 4 && tujuan == 1){
            std::cout << ">> Reamur ke Celcius\n";
            std::cout << "input suhu Reamur : ";
            std::cin >> suhu;
            // reamur ke celcius
            hasil = suhu * 5/4;
            std::cout << suhu << satuan[3] << " = " << hasil << satuan[0] << std::endl;
        }
        else if(asal == 4 && tujuan == 2){
            std::cout << ">> Reamur ke Fahrenheit\n";
            std::cout << "input suhu Reamur : ";
            std::cin >> suhu;
            // reamur ke fahrenheit
            hasil = (suhu * 9/4) + 32;
            std::cout << suhu << satuan[3] << " = " << hasil << satuan[1] << std::endl;
        }
        else if(asal == 4 && tujuan == 3){
            std::cout << ">> Reamur ke Kelvin\n";
            std::cout << "input suhu Reamur : ";
            std::cin >> suhu;
            // reamur ke kelvin
            hasil = (suhu * 5/4) + 273.15;
            std::cout << suhu << satuan[3] << " = " << hasil << satuan[2] << std::endl;
        }

        std::cout << "\n>> quit/loop/new ? (q/l/n): ";
        std::cin >> pilih;
        std::cout << std::endl;
    }

    else if(pilih == "q" || pilih == "Q"){
        break;
    }

    else if(pilih == "n" || pilih == "N"){
        break;
    }

    else{
        while(true){
            std::cout << "pilihan tidak valid";
            std::cout << "\n>> quit/loop/new ? (q/l/n): ";
            std::cin >> pilih;
            std::cout << std::endl;
            break;
        }
        continue;
    }

}
    if(pilih == "q" || pilih == "Q"){
        std::cout << "=== Terima Kasih ===\n";
        break;
    }

    }

    return 0;
}