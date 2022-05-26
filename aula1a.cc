#include <iostream>
#include <fstream>

using namespace std;
int i;
int linha = 0;


int main(void){

   string line;
   ifstream ark ("grafo.txt");

   if(ark.is_open() ){
      cout << "Arquivo aberto! \n";
   }

   while( !ark.eof() ){
      ark >> line;
      linha ++;  // Preenche o Vetor
      ark >> line;   
      ark >> line;
   }
   ark.close();
   ark.clear();

// LEU O ARQUIVO UMA VEZ E COMEÇA A SEGUNDA LEITURA
//-------------------------------------------------

    int x[linha];
    int y[linha];

    ark.open("grafo.txt");

    while( !ark.eof() ){
      ark >> line;
      ark >> line;
      x[i] = stoi(line);

      ark >> line;
      y[i] = stoi(line);
      i++;
    }

    ark.close();

    cout << "Número de linhas: " << linha << "\n";
    cout << "ULTIMO VALOR X: " << x[linha-1] << "\n";
    cout << "ULTIMO VALOR y: " << y[linha-1] << "\n";

  return 0;
}