#include <iostream>
using namespace std;

int main() {
  int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, v1, v2;

  cout << "Digite o CPF(sem os digitos verificadores): ";

  cin >> cpf;

  if (cpf < 10000000 || cpf > 999999999) {
    cout << "CPF invalido";
    return 0;
  }

  d9 = cpf % 10; // separa o ultimo digito, fazendo mod por 10, separando o
                 // ultumo, por não ser inteiro
  cpf = cpf / 10;
  d8 = cpf % 10;
  cpf = cpf / 10;
  d7 = cpf % 10;
  cpf = cpf / 10;
  d6 = cpf % 10;
  cpf = cpf / 10;
  d5 = cpf % 10;
  cpf = cpf / 10;
  d4 = cpf % 10;
  cpf = cpf / 10;
  d3 = cpf % 10;
  cpf = cpf / 10;
  d2 = cpf % 10;
  cpf = cpf / 10;
  d1 = cpf % 10;

  v1 = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) +
       (d7 * 4) + (d8 * 3) + (d9 * 2);
  v1 = v1 % 11;

  if (v1 < 2) {
    v1 = 0;
  } else {
    v1 = 11 - v1;
  }

  v2 = (d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) +
       (d7 * 5) + (d8 * 4) + (d9 * 3) + (v1 * 2);
  v2 = v2 % 11;

  if (v2 < 2) {
    v2 = 0;
  } else {
    v2 = 11 - v2;
  }

  cout << "Seu cpf é: " << d1 << d2 << d3 << "." << d4 << d5 << d6 << "." << d7
       << d8 << d9 << "-" << v1 << v2;
}