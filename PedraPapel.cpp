#include <iostream>
#include <locale>

using namespace std;

// Desafio do Pedra Papel Tesoura 
int main() {
	
	int resp1,resp2, r;


	do{

		cout << " 1- Pedra : " << endl;
		cout << " 2- Papel : " << endl;
		cout << " 3- Tesoura : " << endl;
		cin >> resp1;
		cin >> resp2;
		
		if(resp1 == resp2)
			cout << " EMPATE ! " << endl;		
				
		else if(resp1 == 2 && resp2 == 1)
			cout << " Papel cobre Pedra : Jogador 1 ganhou ! " << endl;
			
		else if(resp1 == 3 && resp2 == 2)
			cout << " Tesoura cobre Papel : Jogador 1 ganhou ! " << endl; 
		
		else if(resp1 == 1 && resp2 == 3)
			cout << " Pedra esmaga Tesoura : Jogador 1 ganhou ! " << endl; 			
			
	//	else if(resp1 < 1 || resp1 > 3 || resp2 < 1 || resp2 > 3);
			
		else if(resp2 == 2 && resp1 == 1)
			cout << " Papel cobre Pedra : Jogador 2 ganhou ! " << endl;
			
		else if(resp2 == 3 && resp1 == 2)
			cout << " Tesoura cobre Papel : Jogador 2 ganhou ! " << endl;
			
		else if(resp2 == 3 && resp1 == 1)
			cout << " Pedra esmaga Tesoura : Jogador 2 ganhou ! " << endl;		
		
		cout << "\n Deseja continuar ? \n 1-Sim \n 2-Nao" << endl;	
		cin >> r;
		
	}
	while(r == 1);	
	
	return 0;
}
