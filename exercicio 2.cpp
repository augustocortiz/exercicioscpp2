/*
2) Fazer um programa que, dado o sal�rio do funcion�rio,
calcule o Imposto de Renda.

Sal�rio Bruto(R$) | Imposto de renda
at� 1900			isento
de 1900 a 2850		7.5%
de 2850 a 3750		15%
de 3750 a 4650		22.5%
Acima de 4650		27.5%

OBS: Fa�a FUN��O para calcular o imposto de renda.
Calcule e mostre o sal�rio L�quido:
sal�rio L�quido = SalarioBruto - ImpostoRenda
*/
#include<iostream>
#include<locale.h>
using namespace std;


float desconto_salario(float salario){
	float desconto;
	
	if(salario<=1900)
		desconto = 0;
	else if(salario<=2850)
		desconto=salario*0.075;
	else if(salario<=3750)
		desconto=salario*0.15;
	else if(salario<=4650)
		desconto=salario*0.225;
	else
		desconto=salario*0.275;
	return desconto;
}

int main(){	

	float salario, desconto;

	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do sal�rio bruto R$ ";
	cin >> salario;

	desconto = desconto_salario(salario);
	if(desconto ==  0)
		cout<<"\nSal�rio sem desconto";
	else{
		cout<<"\nDesconto IRPF "<<desconto*100/salario<<"% - R$ "<<desconto;
	}
	
	cout<<"\n\nSalario l�quido R$ "<<salario-desconto;
}
