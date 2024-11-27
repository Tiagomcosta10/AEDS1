#include <iostream>

class Fruta {
public:
    float preco; // preço da fruta

private:
    float peso;   // peso da fruta
    int codigo;   // código do tipo da fruta

    // Construtor privado vazio
    Fruta() {}

public:
    // Construtor público
    Fruta(int cod, float p) {
        codigo = cod;
        peso = p;
        preco = -1; // Define o preço como não cadastrado
    }

    // Destrutor
    ~Fruta() {}

    // Verifica se a fruta está cadastrada
    bool estaCadastrado() { 
        return !(preco < 0); 
    }

    // Métodos para acessar os atributos privados
    float getPeso() { return peso; }
    int getCodigo() { return codigo; }
    float getPreco() { return preco; }

    // Método para definir o preço
    bool setPreco(float novo) {
        if (novo < 0) {
            return false;
        }
        preco = novo;
        return true;
    }
};
class pessoa{
    public:
    char*name;
    int matr; 
    int cep;
    private:
    pessoa []{}
    public:
    pessoa (char*n, int m, int c){
        nome=n;
        mat=m;
        cup=c;
    
    }
    ~pessoa(){}
    class funcuncionario::pessoa{
        private:
        float salario;
        funcionario( ){}
        public: 
        funcionario(char*n, int m, int c, float s)
        ::pessoa(n,m,c){
            salario=s;
        }   
        bool pedir aumento (float novo){
            if(novo<=salario) return  false;
            else if (salario*1,05<= return novo){
                salario=novo;
                return true;
            } else return false;
        }
        }
}


int main() {
    int codigo;
    float peso;

    // Entrada do código e peso da fruta
    std::cin >> codigo >> peso;

    // Criação do objeto fruta
    Fruta banana(codigo, peso);

    // Verifica se a fruta está cadastrada (tem preço válido)
    if (!banana.estaCadastrado()) {
        float preco;
        std::cin >> preco; // Entrada do preço
        banana.setPreco(preco); // Define o preço usando o método
    }

    // Exibe informações da fruta
    std::cout << "Código: " << banana.getCodigo() << "\n";
    std::cout << "Peso: " << banana.getPeso() << " kg\n";
    std::cout << "Preço: R$ " << banana.getPreco() << "\n";

    return 0;
}


