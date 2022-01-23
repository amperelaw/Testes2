#include <iostream>
#include <string>
using namespace std;

bool letra_existe(char chute){


}

int main (){

    string palavra_secreta = "MELANCIA";
    cout << palavra_secreta << endl; 

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){
        char chute;
        cin >> chute;

        if (letra_existe(chute)){
            cout << "Você acertou! O seu chute está na palavra." << endl;
        }
        else {
            cout << "Você errou! O seu chute não está na palavra. " 
        }

        for (int i = 0; i <= strlen palavra_secreta; i++)

    }


}       