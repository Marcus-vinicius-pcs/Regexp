/*********************************************************************/
/**   ACH2001 - Introducao a Programacao                            **/
/**   EACH-USP - Primeiro Semestre de 2021                          **/
/**   <194> - <Luciano Digiampietri>                                **/
/**                                                                 **/
/**   Segundo Exercicio-Programa                                    **/
/**                                                                 **/
/**   <Marcus Vinicius Pizzo Cognolatto Santos>         <12543478>  **/
/**                                                                 **/
/*********************************************************************/

/*
	Calculo para raiz quadrada
*/

#include <stdio.h>

/*
	Calcula a raiz quadrada de um valor, com uma determinada
	precisao. Retorna esse valor, ou -1 quando:
	
	* a < 0
	* epsilon <= 0
	* epsilon >= 1
	
	Parametro:
		a - valor cuja raiz quadrada sera calculada
		epsilon - precisao do calculo
*/
double absoluto(double valor){
  if(valor<0) return valor*(-1);
  else
  return valor;
}


double raizQuadrada(double a, double epsilon) {
	double resposta, respostax0;
 if((a<0) || (epsilon>=1) || (epsilon<=0))
	return -1;
  else{
 
  for (resposta = a/2;
        absoluto(respostax0 - resposta) >= epsilon;
        resposta = (resposta + (a/resposta))/2){
  		
		  respostax0 = resposta;
    }
return resposta;
}
  }
/*
	Apenas para seus testes. ISSO SERA IGNORADO NA CORRECAO
*/
int main() {

	
	double valor = 63;
	double precisao = 0.001;
  	printf("Raiz aproximada de %f = %f\n", valor, raizQuadrada(valor, precisao));

	return 0;
}
