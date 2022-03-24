#include <iostream>
#include <string>

using namespace std;
int main() {
   //Digit armazena o código de barras e divi separa os números
    long long digit;
    long long divi = 1000000000000;

   //Variáveis d criadas para armazenar os digitos do código 
    short d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, div, rem = 10, ver;

    cout << "Digite um numero inteiro de 13 digitos: ";
    cin >> digit;

    string digit1 = to_string(digit);

    if (digit1.length() == 13) {
        d12 = (digit / divi);
        d11 = (digit / (divi / 10)) % rem * 3;
        d10 = (digit / (divi / 100) % rem);
        d9 = (digit / (divi / 1000) % rem) * 3;
        d8 = (digit / (divi / 10000) % rem);
        d7 = (digit / (divi / 100000) % rem * 3);
        d6 = (digit / (divi / 1000000) % rem);
        d5 = (digit / (divi / 10000000) % rem * 3);
        d4 = (digit / (divi / 100000000) % rem);
        d3 = (digit / (divi / 1000000000) % rem * 3);
        d2 = (digit / (divi / 10000000000) % rem);
        d1 = (digit / (divi / 100000000000) % rem * 3);
        d0 = digit / (divi / 1000000000000) % rem;
    //Soma dos números
        short sum = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9 + d10 + d11 + d12;
        div = sum / 10;
        div += 1;
        div *= 10;
    //Subtração do total com o resultado das operações acima
        ver = (div - sum);
    //Resultado Final
        cout <<"O digito verificador é  "<< ver << "\n";
    }
    else
    {
        cout << "Digito inválido";
    }
    return 0;
}