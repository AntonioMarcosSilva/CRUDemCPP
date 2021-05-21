#include <iostream>
#include <string.h>

using namespace std;


int main(){
 
 	//as variaveis do  meu CRUD 
 
	string nome;
 	int idade;
	float altura;
	float peso;
	float cpf;
	float rg;
	char sexo;
	
	inicio:  //o goto srá execultado aqui
		
		system ("cls"); // o cls é opcional, para limpar a tela apenas
	
	cout<<"cadastramento de pessoas:\n\n";
	
	cout<<"preencha algumas informações abaixo\n\n";
	
	// o laço de repetição while servirá para pedir novamente as informações caso estejam incorretas
	//o usuario deve digitar a quantidade de caracteres corretamente
	
	do{
	
	cout <<"digite seu nome:";
	cin >>nome;
	}while(nome.length ()<5 ); //o nome deve ser maior do que 5 caracteres, caso contrário, aparecerá novamente 
	
	cout <<"ok.\n\n";
	
	do{
	
	cout <<"digite sua idade:";
	cin >> idade;
	}while(idade<=17);
	

		cout <<"ok.\n\n";
	
	


	do{
	
	cout <<"digite sua altura:";
	cin >>altura;	
	}while(altura<=0);
	
	cout <<"ok\n\n";
	
	do{
	
	cout <<"digite seu peso:";
	cin >> peso;
	}while(peso<=0);
	
	
	cout <<"peso ok.\n\n";
	
	
	
	do{
	
	cout <<"digite seu sexo:";
	cin >>sexo;
	}while(sexo !='f' && sexo!='m'); // o sexo deve ser 'm'ou 'f' para ser execultado
	
	cout<<"ok.\n\n";
	
		do{
	
	cout <<"digite seu cpf:";
	cin >> peso;
	}while(peso<=10000000); //deve conter 7 numeros
	
	cout<<"ok.\n\n";
	
		do{
	
	cout <<"digite seu rg:";
	cin >> rg;
	}while(rg<=10000000); //deve conter 7 numeros
	
	cout<<"ok.\n\n";
	
	goto inicio; //levará o código ao inicio, execultando o "cls", para limpar a tela.
	


return 0;
}
