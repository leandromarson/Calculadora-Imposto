#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	struct funcionario{
		
		char nome[40];
		float salario;
		float ir;
		 
		};
		
		struct funcionario f;
		
		printf("\nCADASTRO DO FUNCIONARiO\n");
		printf("Nome do funcionario\n");
		fflush(stdin);
		fgets(f.nome,40, stdin);
		printf("SALARIO\n");
		fflush(stdin);
		scanf("%f",&f.salario);
		
		if(f.salario<=2000){
			
			f.ir=0;
			
		}else if(f.salario>2000 && f.salario<=5000){
			
			f.ir=(f.salario * 0.11);
			
		}else if(f.salario>5000){
			
			f.ir=(f.salario * 0.27);
			
		}
		
		f.salario=f.salario-f.ir;
		printf("\nNome: %s\n",f.nome);
		printf("\nSalario: %.2f\n",f.salario);
		printf("\nImposto de renda: %.2f\n",f.ir);
		getch();
		system("pause");
		return 0;
}
