feira.cpp
#include <iostream>
#include <string>
class Fruta {private:float peso;   
int codigo;  float preco;  
public:Fruta(int cod, float p) : codigo(cod), peso(p), preco(-1) {}
~Fruta() {} bool estaCadastrado() const { 
return preco >= 0; }
float getPeso() const { return peso; }
int getCodigo() const { return codigo; }
float getPreco() const { return preco; }
bool setPreco(float novo) {
if (novo < 0) {return false;}
preco = novo;return true;}};
class Pessoa {protected:
std::string nome;int matricula;int cep;
public:
Pessoa(std::string n, int m, int c) : nome(n), matricula(m), cep(c) {}
 virtual ~Pessoa() {}}; class Funcionario : public Pessoa {
private:float salario;
public:
Funcionario(std::string n, int m, int c, float s) 
: Pessoa(n, m, c), salario(s) {}
bool pedirAumento(float novo) {
if (novo <= salario) return false;
if (novo >= salario * 1.05) {
salario = novo; return true;}
return false;}};
int main() {int codigo;float peso;
std::cout << "Digite o código e o peso da fruta: ";
std::cin >> codigo >> peso;
Fruta banana(codigo, peso);
if (!banana.estaCadastrado()) {float preco;
std::cout << "Digite o preço da fruta: ";
std::cin >> preco; banana.setPreco(preco); }
std::cout << "Código: " << banana.getCodigo() << "\n";
std::cout << "Peso: " << banana.getPeso() << " kg\n";
std::cout << "Preço: R$ " << banana.getPreco() << "\n";
return 0;}