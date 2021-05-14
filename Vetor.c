#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float vetor_nota[2], media; // Notas [6,6][7,2][9,0]
    int cont = 0,i;
	 
	for(i = 0; i <=2; i++){
		
		printf("Informe a nota %d \n",i);
		scanf("%f",&vetor_nota[i]);
		cont++;
		media = ( vetor_nota[i] + vetor_nota[i-1] + vetor_nota[i-2]) /3;
	}	
	
	i=0;
	cont = 0;
	for(i = 0;i<=2; i++){
	
	printf("vetor posição  %d =  %.2f\n",i,vetor_nota[i]);
	cont++;
}
	
	printf("\nMedia %.2f\n",media);
	
	if(media >=9 ){
		printf("\nConceito A");
	}else if(media >=8.0 && media <= 8.9){
		printf("\nConceito B");
	}else if(media >= 7.0 && media <= 7.9){
		printf("\nConceito C");
	}else if(media >= 6.0 && media <=6.9){
		printf("\nConceito D");
	}else if(media < 6){
		printf("\nConceito F");
	}
	
}

