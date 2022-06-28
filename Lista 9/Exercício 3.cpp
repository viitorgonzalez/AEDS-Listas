#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
  int codigo, idade;
  string nome, endereco, numero, complemento;
  Pessoa() {}
  Pessoa(int cd) {
    codigo = 0;
    idade = 0;
    nome = "";
    endereco = "";
    numero = "";
    complemento = "";
  }
  int getCodigo() { return codigo; }
  void setCodigo(int cd) { codigo = cd; }
};

int main() {
  int op, cd, cad;
  cout << "\nDigite 1 para cadastrar ou 2 para deletar seu cadastro!\n";
  cin >> op;
  int n = 5;
  Pessoa P[n];
  if (op == 1) {
    cout << "\nDigite quantos cadastros deseja fazer: ";
    cin >> cad;
  }
  switch (op) {
  case 1:
    for (int i = cad; i <= n; i++) {
      P[i].setCodigo(i);
      cout << "\nDigite seu nome: ";
      cin >> P[i].nome;
      cout << "\nDigite seu número: ";
      cin >> P[i].numero;
      cout << "\nDigite sua idade: ";
      cin >> P[i].idade;
      cout << "\nDigite seu endereço: ";
      cin >> P[i].endereco;
      cout << "\nDigite o complemento: ";
      cin >> P[i].complemento;
      cout << "\nSeu código é: " << i;
    }
    break;
  case 2:
    cout << "\nDigite seu código: \n";
    cin >> cd;
    Pessoa(cd);
    break;
  }
}
