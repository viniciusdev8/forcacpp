#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	system("color a");
	
	char Palavra[15], Letra[1], Inv[15];
	int Tamanho, Chances, i, Acertos;
	bool Acertou;
	
	Tamanho = 0;
	i= 0;
	Chances = 10;
	Acertou = false;
	Acertos = 0;
	
	cout << "[DIGITE UMA PALAVRA]: ";
	cin >> Palavra;
	system("cls");
	
	while(Palavra[i] != '\0'){
		i++;
		Tamanho++;
	}
	
	for(i=0; i<Tamanho; i++){
		Inv[i] = 'x';
	}
	while((Chances > 0) && (Acertos < Tamanho)){
		cout << "[CHANCES RESTANTES]: " << Chances << endl;
		cout << "[PALAVRA]: ";
		for(i=0; i<Tamanho; i++) {
			cout << Inv[i];
		}
		cout << endl;
		cout << "[DIGITE UMA LETRA]: ";
		cin >> Letra[0];
		
		for(i=0; i<Tamanho; i++){
			if (Palavra[i] == Letra[0]){
				Acertou = true;
				Inv[i] = Palavra[i];
				Acertos++;
			}
		}
		if (!Acertou){
			Chances--;
		}
		Acertou=false;
		system("cls");
	}
	(Acertos == Tamanho) ? cout << "VOCE VENCEU" << endl : cout << "VOCE PERDEU" << endl;
	system("pause");
	
return 0; 
}
