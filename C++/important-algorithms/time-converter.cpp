#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {

    int s, m, h; // (Segundos, minutos, horas)

    cout << "\nDigite um valor em segundos: ";
    cin >> s;

    h = s / 3600; // Hora recebe segundos dividido por 3600 (1 hora é 3600 segundos) - Resultado vai ser número inteiro.
    s -= h * 3600; // Segundos recebe segundos - (horas * 3600) - A sobra da operação acima vai para os segundos.

    m = s / 60; // Minutos recebe o valor de segundos dividio por 60 - Resultado vai ser número inteiro
    s -= m * 60; // Por fim, segundos recebem o valor restante de segundos - (minutos * 60)

    
    cout << "\nEste valor equivale a: ";

    cout << 
    setfill('0') << setw(2) << h << "h " << 
    setfill('0') << setw(2) << m << "m " << 
    setfill('0') << setw(2) << s << "s" << 
    endl << endl;

    return 0;
}