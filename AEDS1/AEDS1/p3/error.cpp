
multerror, esq,dir
#include <iostream>
#include <stdexcept>
int main() {
int i, n;
std::cin >> n>> i;
int[]v;
try {if (n <= 0) throw 1;
else if(i<0||i>=n) throw 2;
v = new int[n];
for (int x = 0; x < n; x++) 
cin>>v[x];
int esq=1, dir=1;
for(int j=0;j<=-1;j++) esq* = v[j];
for(int k=i+1;k<=n-1;k++) dir* = v[k];
cout<<"resultado"<<esq+dir<<endl;
delete v;}
cath (int codigo){
if(codigo=-1) cout<<"n é positivo"<<endl;
else if (codigo==2)
cout<<"i fora dos limites"<<endl;
else cout<< "erro desconhecido"<< endl;}
catch (const bad alloc&e){
cout<<"memoria não alocada"<< endl;}}
