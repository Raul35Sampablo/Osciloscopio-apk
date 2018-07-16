#include <iostream>

using namespace std;

int main()
{
    double voltaje_pico_a_pico;
    double voltaje_maximo;
    double voltaje_RMS;
    int tipo_de_voltaje;

    cout << "\n";
    cout << "Ingrese el numero que indique el tipo de valor voltaje que este midiendo: ";
    cout << "\n";
    cout << "1 ---->   Voltaje maximo a maximo tambien denominado voltaje pico a pico\n";
    cout << "2 ---->   Voltaje maximo o tambien denominado voltaje  pico\n";
    cout << "3 ---->   Voltaje RMS o tambien denominado voltaje efectivo\n";
    cin  >> tipo_de_voltaje;

    if(tipo_de_voltaje==1){

        cout << "\n";
        cout << "Ingrese el voltaje maximo a maximo o tambien denominado voltaje pico a pico: \n";
        cout << "\n";
        cin  >> voltaje_pico_a_pico;

        voltaje_maximo = voltaje_pico_a_pico * 0.5;
        voltaje_RMS = voltaje_pico_a_pico * 0.353;

        cout << "\n";
        cout << "El voltaje pico a pico es: " << voltaje_pico_a_pico << "V\n";
        cout << "El voltaje maximo es: " << voltaje_maximo << "V\n";
        cout << "El voltaje RMS es: " << voltaje_RMS << "V\n";

}
    else if(tipo_de_voltaje==2){

        cout << "\n";
        cout << "Ingrese el voltaje maximo o tambien denominado voltaje pico: \n";
        cout << "\n";
        cin  >> voltaje_maximo;

        voltaje_pico_a_pico = voltaje_maximo * 2;
        voltaje_RMS = voltaje_maximo * 0.707;

        cout << "\n";
        cout << "El voltaje pico a pico es: " << voltaje_pico_a_pico << "V\n";
        cout << "El voltaje maximo es: " << voltaje_maximo << "V\n";
        cout << "El voltaje RMS es: " << voltaje_RMS << "V\n";

    }
    else if(tipo_de_voltaje==3){

        cout << "\n";
        cout << "Ingrese el voltaje RMS o tambien denominado voltaje efectivo: \n";
        cout << "\n";
        cin  >> voltaje_RMS;

        voltaje_pico_a_pico = voltaje_RMS * 2.828;
        voltaje_maximo = voltaje_RMS * 1.414;

        cout << "\n";
        cout << "El voltaje pico a pico es: " << voltaje_pico_a_pico << "V\n";
        cout << "El voltaje maximo es: " << voltaje_maximo << "V\n";
        cout << "El voltaje RMS es: " << voltaje_RMS << "V\n";

    }
    else{

        cout << "\n";
        cout << "    Error 404 .......   :c\n";
        system ("pause");
    }


    return 0;
}
