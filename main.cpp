#include <iostream>
#include <cmath>

int main() {
    double masa = 2.0;
    double k = 100.0;

    double frecuencia = (1.0 / (2.0 * 3.14159265359)) * 
                        std::sqrt(k / masa);

    std::cout << "Masa: " << masa << " kg\n";
    std::cout << "Rigidez: " << k << " N/m\n";
    std::cout << "Frecuencia natural: " << frecuencia << " Hz\n";

    return 0;
}