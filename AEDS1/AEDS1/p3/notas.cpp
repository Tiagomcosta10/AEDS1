#include <iostream>
class Aluno {
private:
int numero; int MAX_NOTAS;         
float* notas; int totalNotas;          
public:
Aluno(int numero, int maxNotas = 10) 
: numero(numero), MAX_NOTAS(maxNotas), totalNotas(0) {
notas = new float[MAX_NOTAS]; }
~Aluno() {delete[] notas; }
void adicionarNota(float nota) {
if (totalNotas < MAX_NOTAS) {
if (nota >= 0 && nota <= 10) {
notas[totalNotas++] = nota; } }
float calcularMedia() const {
if (totalNotas == 0){float soma = 0.0;
for (int i = 0; i < totalNotas; ++i) {
soma += notas[i];}
return soma / totalNotas;}
void mostrarDados() const {
std::cout << "Aluno Número: " << numero << std::endl;
std::cout << "Notas: ";
for (int i = 0; i < totalNotas; ++i) {
std::cout << notas[i] << " ";}
std::cout << "\nMédia: " << calcularMedia() << std::endl;}
};int main() {int numero;
std::cin >> numero;
Aluno aluno(numero);
int qtdNotas;
std::cout << "Quantas notas deseja adicionar (máximo 10)? ";
std::cin >> qtdNotas;
if (qtdNotas > 10) {
std::cout << "Você só pode adicionar até 10 notas." << std::endl;
qtdNotas = 10;}
for (int i = 0; i < qtdNotas; ++i) {
float nota;
std::cout << "Digite a nota " << (i + 1) << ": ";
std::cin >> nota;aluno.adicionarNota(nota);}
aluno.mostrarDados();return 0;}
