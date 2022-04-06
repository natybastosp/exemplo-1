#include <stdio.h>

typedef unsigned int uint;

typedef struct Pessoa {
	char nome[100]; 
	uint idade;
	char sexo; // 'F', 'M'
	char cpf[11];		
}t_pessoa;

int main(void) {
  struct Pessoa p1, v_p[10];
	t_pessoa pessoa, pessoas[100], *ptr_pessoa;
  return 0;
}