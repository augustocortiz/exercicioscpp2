/*
1. Fa�a um programa que leia os dados dos pontos A(x1,y1)
e B(x2,y2) e fa�a uma FUN��O para calcular a dist�ncia
entre os pontos A e B(dAB):
dAB = raiz((x2-x1)�+(y2-y1)�)
*/
#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;


float calcular_distancia(float x1, float y1, float x2, float y2){
	float calculo;
	
	calculo = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	
	return calculo;
}

int main(){	

	float x1, y1, x2, y2, distancia;

	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do ponto A(x1) = ";
	cin >> x1;
	cout << "Informe o valor do ponto A(y1) = ";
	cin >> y1;
	cout << "Informe o valor do ponto B(x2) = ";
	cin >> x2;
	cout << "Informe o valor do ponto B(y2) = ";
	cin >> y2;

	distancia = calcular_distancia(x1,y1,x2,y2);
	
	cout<<"O valor da dist�ncia entre os pontos � "<<distancia;
}
