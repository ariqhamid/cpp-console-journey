#include <iostream>
#include <limits>
#include <string>

double inputSuhu(int asal, const std::string& pesan);
bool cekEnter();
 
int main(){
    double c, f, k, r;

    std::string asalStr, tujuanStr;
    int asal = 0, tujuan = 0;
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
        std::cout << ">> pilih (1-4) : ";
        if (cekEnter()) continue; // Jika Enter, ulangi loop
        std::cin >> asalStr;

        if (asalStr.length() == 1 && asalStr[0] >= '1' && asalStr[0] <= '4') {
            asal = asalStr[0] - '0';  
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        } 
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Input tidak valid! Masukkan angka 1, 2, 3, atau 4.\n";
        }
    }

    std::cout << std::endl;

    std::cout << "=== KONVERSI SUHU (tujuan) ===\n";
    std::cout << "pilih suhu >> tujuan << : \n";
    std::cout << "1. Celcius\n";
    std::cout << "2. Fahrenheit\n";
    std::cout << "3. Kelvin\n";
    std::cout << "4. Reamur\n";

    while (true) {
        std::cout << ">> pilih (1-4) : ";
        if (cekEnter()) continue; // Jika Enter, ulangi loop
        std::cin >> tujuanStr;

        if (tujuanStr.length() == 1 && tujuanStr[0] >= '1' && tujuanStr[0] <= '4') {
            tujuan = tujuanStr[0] - '0';  
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        } 
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Input tidak valid! Masukkan angka 1, 2, 3, atau 4.\n";
        }
    }

    std::cout << std::endl;

    pilih = "l";
    
        while(true){

            if (pilih == "l" || pilih == "L"){

                if(asal == 1 && tujuan == 2){
                    std::cout << ">> Celcius ke Fahrenheit\n";
                    suhu = inputSuhu(1, "input suhu Celcius : ");
                    // celcius ke fahrenheit
                    hasil = (suhu * 9/5) + 32;
                    std::cout << suhu << satuan[0] << " = " << hasil << satuan[1] << std::endl;
                }
                else if(asal == 1 && tujuan == 3){
                    std::cout << ">> Celcius ke Kelvin\n";
                    suhu = inputSuhu(1, "input suhu Celcius : ");
                    // celcius ke kelvin
                    hasil = suhu + 273.15;
                    std::cout << suhu << satuan[0] << " = " << hasil << satuan[2] << std::endl;
                }
                else if(asal == 1 && tujuan == 4){
                    std::cout << ">> Celcius ke Reamur\n";
                    suhu = inputSuhu(1, "input suhu Celcius : ");
                    // celcius ke reamur
                    hasil = suhu * 4/5;
                    std::cout << suhu << satuan[0] << " = " << hasil << satuan[3] << std::endl;
                }

                else if(asal == 2 && tujuan == 1){
                    std::cout << ">> Fahrenheit ke Celcius\n";
                    suhu = inputSuhu(2, "input suhu Fahrenheit : ");
                    // fahrenheit ke celcius
                    hasil = (suhu - 32) * 5/9;
                    std::cout << suhu << satuan[1] << " = " << hasil << satuan[0] << std::endl;
                }
                else if(asal == 2 && tujuan == 3){
                    std::cout << ">> Fahrenheit ke Kelvin\n";
                    suhu = inputSuhu(2, "input suhu Fahrenheit : ");
                    // fahrenheit ke kelvin
                    hasil = (suhu - 32) * 5/9 + 273.15;
                    std::cout << suhu << satuan[1] << " = " << hasil << satuan[2] << std::endl;
                }
                else if(asal == 2 && tujuan == 4){
                    std::cout << ">> Fahrenheit ke Reamur\n";
                    suhu = inputSuhu(2, "input suhu Fahrenheit : ");
                    // fahrenheit ke reamur
                    hasil = (suhu - 32) * 4/9;
                    std::cout << suhu << satuan[1] << " = " << hasil << satuan[3] << std::endl;
                }

                else if(asal == 3 && tujuan == 1){
                    std::cout << ">> Kelvin ke Celcius\n";
                    suhu = inputSuhu(3, "input suhu Kelvin : ");
                    // kelvin ke celcius
                    hasil = suhu - 273.15;
                    std::cout << suhu << satuan[2] << " = " << hasil << satuan[0] << std::endl;
                }
                else if(asal == 3 && tujuan == 2){
                    std::cout << ">> Kelvin ke Fahrenheit\n";
                    suhu = inputSuhu(3, "input suhu Kelvin : ");
                    // kelvin ke fahrenheit
                    hasil = (suhu - 273.15) * 9/5 + 32;
                    std::cout << suhu << satuan[2] << " = " << hasil << satuan[1] << std::endl;
                }
                else if(asal == 3 && tujuan == 4){
                    std::cout << ">> Kelvin ke Reamur\n";
                    suhu = inputSuhu(3, "input suhu Kelvin : ");
                    // kelvin ke reamur
                    hasil = (suhu - 273.15) * 4/5;
                    std::cout << suhu << satuan[2] << " = " << hasil << satuan[3] << std::endl;
                }

                else if(asal == 4 && tujuan == 1){
                    std::cout << ">> Reamur ke Celcius\n";
                    suhu = inputSuhu(4, "input suhu Reamur : ");
                    // reamur ke celcius
                    hasil = suhu * 5/4;
                    std::cout << suhu << satuan[3] << " = " << hasil << satuan[0] << std::endl;
                }
                else if(asal == 4 && tujuan == 2){
                    std::cout << ">> Reamur ke Fahrenheit\n";
                    suhu = inputSuhu(4, "input suhu Reamur : ");
                    // reamur ke fahrenheit
                    hasil = (suhu * 9/4) + 32;
                    std::cout << suhu << satuan[3] << " = " << hasil << satuan[1] << std::endl;
                }
                else if(asal == 4 && tujuan == 3){
                    std::cout << ">> Reamur ke Kelvin\n";
                    suhu = inputSuhu(4, "input suhu Reamur : ");
                    // reamur ke kelvin
                    hasil = (suhu * 5/4) + 273.15;
                    std::cout << suhu << satuan[3] << " = " << hasil << satuan[2] << std::endl;
                }

                while (true) {                
                    std::cout << "\n>> quit/loop/new ? (q/l/n): ";

                    if (std::cin.peek() == '\n') {
                        std::cin.ignore(); 
                        std::cout << "Input tidak boleh kosong!\n";
                        continue; 
                    }
                    
                    std::cin >> pilih;

                    if (pilih == "q" || pilih == "Q" || pilih == "n" || pilih == "N" || pilih == "l" || pilih == "L") {
                        std::cin.ignore();
                        std::cout << std::endl;
                        break; 
                    } 
                    
                    else {
                        std::cout << "Pilihan tidak valid! Gunakan q, l, atau n.\n";
                        std::cin.ignore();
                        continue;
                    }
                }
            }

            else if(pilih == "q" || pilih == "Q"){
                std::cout << "=== Selesai ===\n";
                return 0;
            }

            else if(pilih == "n" || pilih == "N"){
                break;
            }
        }
    }
}

// Fungsi untuk meminta input suhu dengan validasi
    double inputSuhu(int asal, const std::string& pesan) {
    double suhu;
    while (true) {
        std::cout << pesan;
        if (cekEnter()) continue; // Jika Enter, ulangi loop
        std::cin >> suhu;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Input tidak valid! Masukkan angka\n";
            continue;
        }

        char sisaBuffer;
        if (std::cin.get(sisaBuffer) && sisaBuffer != '\n') {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Input tidak valid! Masukkan satu angka saja\n";
            continue;
        }

        if ((asal == 1 && suhu < -273.15) ||
            (asal == 2 && suhu < -459.67) ||
            (asal == 3 && suhu < 0) ||
            (asal == 4 && suhu < -218.52)) {
            std::cout << "Error: Suhu di bawah nol absolut! Tidak mungkin\n";
            continue;
        }

        break;
    }
    return suhu;
}

// fungsi cek enter
bool cekEnter() {
    if (std::cin.peek() == '\n') {
        std::cin.ignore();
        std::cout << "Input tidak boleh kosong!\n";
        return true; 
    }
    return false;
}