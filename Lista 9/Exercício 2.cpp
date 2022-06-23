#include <iostream>

/*Crie uma classe Pessoa com atributos: nome e sobrenome. 
A classe ainda deve conter os seguintes métodos: 
 Um construtor com os dados de nome e sobrenome para os atributos. 
 getNomeCompleto() que não possui parâmetros de entrada e que escreve a concatenação 
do atributo nome com o atributo sobrenome; 
Implemente também uma subclasse de Pessoa, chamada Funcionario. A classe Funcionario 
deve  ter  os  atributos  matricula  (tipo  int)  e  salario  (tipo  double),  com  um  construtor  que 
invoca o construtor da superclasse e acrescenta os valores aos seus atributos.  
O salário de um funcionário jamais poderá ser negativo. Todo funcionário recebe seu salário 
em duas parcelas, sendo 60% na primeira parcela e 40% na segunda parcela. Assim, escreva 
os métodos:  
 getSalarioPrimeiraParcela() que retorna o valor da primeira parcela do salário; 
 getSalarioSegundaParcela() que retorna o valor da segunda parcela do salário. 
Crie uma subclasse de Funcionario, chamada Professor. Todo professor recebe seu salário 
em uma única parcela. Assim, devem-se sobrescrever os métodos 
getSalarioPrimeiraParcela() e getSalarioSegundaParcela(). O método 
getSalarioPrimeiraParcela() da classe Professor deve retornar o valor integral do salário do 
professor e o método getSalarioSegundaParcela() do professor deve retornar o valor zero. 
Crie também um construtor que invoca o construtor da superclasse. */

class Pessoa {
private:
    std::string nome;
    std::string sobrenome;

public:
    Pessoa(std::string nome, std::string sobrenome) { //construtor
        this->nome = nome;
        this->sobrenome = sobrenome;
    }

    std::string getNomeCompleto() {
        return this->nome + this->sobrenome; 
    }
};

class Funcionario : public Pessoa { //Funcionario é filho de Pessoa
private:
    int matricula;

public:
    double salario;

    Funcionario(int matricula, double salario, std::string nome, std::string sobrenome) : Pessoa(nome, sobrenome) {
        if (salario < 0){
            std::cout << "Error! Salario não pode ser negativo!";
        } else {
            this->matricula = matricula;
            this->salario = salario;
        }
    }

    double getSalarioPrimeiraParcela() {
        return this->salario * 0.6;
    }
    double getSalarioSegundaParcela() {
        return this->salario * 0.4;
    }
};

class Professor : public Funcionario { //Professor é filho de Funcionario
    double getSalarioPrimeiraParcela() {
        return this->salario;
    }

    Professor(int matricula, double salario, std::string nome, std::string sobrenome) : Funcionario(matricula, salario, nome, sobrenome){}
};