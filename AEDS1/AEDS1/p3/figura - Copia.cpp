fgurass.cpp
#include <stdio.h>
#include <iostream>
using namespace std;
class figuras{
protected: 
float largura;float altura;
public:
figuras(float l, float a)  { largura= l; altura=a;}
virtual float area() {return -1;}
~figuras () {}};
class retangulo: public figuras {
public:
retangulo(float l, float a) : figuras(l,a) {}
~retangulo(){}
float area (){return largura* altura;}
float perimetro (){return (largura * 2) + (altura * 2);}
void retangulo_vazio (){ for (int l = 0; l < altura; l++) {
if (l == 0 || l == altura - 1) {
for (int c = 0; c < largura; c++) {cout << '*';}
} else {cout << '*';
for (int c = 0; c < largura - 2; c++) {
cout << ' ';}
cout << '*';}cout << endl;}}};
class triangulo: public figuras {
public:
triangulo(float l, float a) : figuras(l,a) {}
~triangulo(){}
float area (){return (largura * altura) / 2;}
float perimetro (){return (largura) + (altura * 2);}
void triangulo_vazio () {for (int l = 0; l < altura; l++) {
for (int c = 0; c <= l; c++) {
if (l == altura - 1 || c == 0 || c == l) {cout << "*";
} else {cout<<" ";}}
cout << endl;}}};
class quadrado: public figuras {
public:quadrado(float l, float a) : figuras(l,a) {}
~quadrado(){}float area (){return largura* altura;}
float perimetro (){return (largura * 2) + (altura * 2);}
void quadrado_vazio(){    for (int l = 0; l< largura; l++){
for (int c = 0; c < largura; c++){
if(l == 0|| l == largura - 1 || c == 0|| c == largura - 1){
cout<<"*";}else{cout<<" ";}}
cout<<endl;}}};
class losangulo: public figuras {
public:
losangulo(float l, float a) : figuras(l,a) {}
~losangulo(){}
float area (){return largura* altura;}
float perimetro () {return ((largura * altura ) / 2);}
void losango_vazio() {
for (int l = 0; l < altura; l++) {
for (int c = 0; c < altura - l - 1; c++) {
cout << " ";}
for (int c = 0; c < 2 * l + 1; c++) {
if (c == 0 || c == 2 * l) {
cout << "*";} else {cout << " ";}}
cout << endl;} 
for (int l = altura - 2; l >= 0; l--) {
for (int c = 0; c < altura - l - 1; c++) {cout << " ";}
for (int c = 0; c < 2 * l + 1; c++) {
if (c == 0 || c == 2 * l) {
cout << "*";} else {cout << " ";}}
cout << endl;}}};    
int main(void){
float l,a ;cin>>l>>a;figuras*f;
//retangulo{
retangulo r(l,a);f = &r;
cout<< "area do retangulo: " << r.area() 
<<" perimetro: "<<r.perimetro()<<endl;
cout << "Retangulo vazio:" << endl;
r.retangulo_vazio();}