tipos  de matrizes
class Matriz {
private:
int lar, alt;
int *val;
public:
Matriz(int l, int a) : lar(l), alt(a) {
val = new int[lar * alt];}
~Matriz() {delete[] val;}    
int get(int i) const {
if (i >= 0 && i < (lar * alt)) {
return val[i];}return -1; }
void set(int i, int v) {
if (i >= 0 && i < (lar * alt)) {
val[i] = v;}} 
int get(int l, int c) const {
if (l >= 0 && l < lar && c >= 0 && c < alt) {
return val[l * alt + c];}return -1; }
void set(int l, int c, int v) {
if (l >= 0 && l < lar && c >= 0 && c < alt) {
val[l * alt + c] = v;}}
void imprimir() const {
for (int i = 0; i < lar; i++) {
for (int j = 0; j < alt; j++) {
std::cout << get(i, j) << " ";}
std::cout << std::endl;}}   
void reschape(int l, int a) {
if (l * a == lar * alt) { 
int* newVal = new int[l * a];
for (int i = 0; i < lar * alt; i++) {
newVal[i] = val[i];}
delete[] val;          
lar = l;alt = a;
val = newVal;} }
void transp() {
int* newVal = new int[lar * alt];       
for (int i = 0; i < lar; i++) {
for (int j = 0; j < alt; j++) {
newVal[j * lar + i] = val[i * alt + j];}}
std::swap(lar, alt);
delete[] val;
val = newVal;}};
int main() {int l, a;
std::cin >> l >> a;
Matriz m(l, a); 
for (int i = 0; i < l; i++) {
for (int j = 0; j < a; j++) {
m.set(i, j, i * a + j); }}