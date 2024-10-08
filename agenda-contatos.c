// Agenda de contatos V.2.0
// Data 03.07.2024
// Desenvolvedor: Alysson

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Registro dos dados de contato
typedef struct {
	char nome[100];
	char celular[30];
	char email[100];
	
}Contato;

// Tamanho máximo do registro
#define MAX_CONTATOS 100

// Declaração do vetor de contatos
Contato agenda[MAX_CONTATOS];
int totalContatos = 0;

// Função menu principal
void menu () {
	printf("Agenda de contatos \n\n");
	printf("1. Cadastrar contato\n");
	printf("2. Listar contatos\n");
	printf("3. Pesquisar contatos\n");
	printf("4. Remover contato\n");
	printf("5. Sair\n");
	printf("Opcao: ");
}

// Função retornar
void retornar() {
	printf("\nDigite <Enter> para retornar ao menu principal!");
	getchar(); // segura a mensagem

	#ifdef _WIN32
		system("cls"); // compilador windows
	#else
		system("clear"); // compilador linux
	#endif
}

// Função para cadastrar contatos
void cadastrarContato(){
	if (totalContatos >= MAX_CONTATOS) {
		printf("\nAgenda Cheia!");
		printf("\nNao e possivel realizar novo cadastro!");
		printf("\nSe necessario, apague um registro!");
		retornar();
	} 
	else {
		Contato novoContato; // Variável para cadastrar um novo contato
		printf("Nome: "); 
//		scanf("%s", novoContato.nome); 
		fflush(stdin);
		fgets(novoContato.nome, 100, stdin);
	
		printf("Celular: "); 
//		scanf("%s", novoContato.celular);
		fflush(stdin);
		fgets(novoContato.celular, 30, stdin);
		
		printf("Email: "); 
		scanf("%s", novoContato.email);
		getchar();
		// Adicionando o contato na agenda
		agenda[totalContatos] = novoContato;
		totalContatos++; // Incrementa quando um contato é adicionado (variável de controle)
		printf("\nCadastro realizado com sucesso!\n");
		retornar();
	}
}

// Função listar contatos
void listarContatos() {
	if (totalContatos == 0) {
		printf("Agenda vazia!");
		printf("\nRealize um cadastro na opcao Cadastrar no menu principal!\n");
		retornar();
	}
	else {
		printf("\nLista de contatos\n");
		for (int i = 0; i < totalContatos; i++) {
			printf("\nContato %i:\n", i+1);
			printf("\nNome: %s", agenda[i].nome);
			printf("Celular: %s", agenda[i].celular);
			printf("Email: %s", agenda[i].email);
			printf("\n");
		} //for
		
		retornar();
	
	} // else
}

// Função pesquisar
void pesquisarContato() {
	char n[100];
	int aux = 0;
	
	if(totalContatos == 0) {
		printf("Agenda vazia!");
		printf("\nRealize um cadastro na opcao Cadastrar no menu principal!\n");
		retornar();
	
	} else {
		printf("Nome para pesquisa: ");
		fflush(stdin);
		fgets(n, 100, stdin);
		
			// Iterando e pesquisando
			for (int i = 0; i < totalContatos; i++) {
				if (strcmp(agenda[i].nome,n)==0) {
					printf("\nNome: %s", agenda[i].nome);
					printf("Celular:%s", agenda[i].celular);
					printf("Email:%s\n", agenda[i].email);
					aux++;
				}
				
			}
			if (aux == 0) {
				printf("\nRegistro nao encontrado!");
			}
			retornar();	
	}
	
}

// Função Remover
void removerContato() {
	char n[100];
	int aux = 0;
	
	if(totalContatos == 0) {
		printf("Agenda vazia!");
		printf("\nRealize um cadastro na opcao Cadastrar no menu principal!\n");
		retornar();
		
	} else {
		printf("Contato a ser removido: ");
		fflush(stdin);
		fgets(n, 100, stdin);
		for (int i = 0; i < totalContatos; i++) {
			if (strcmp(agenda[i].nome,n)==0) {
				for (int j = i; j < totalContatos; j++) {
					agenda[j] = agenda[j+1];
					
				} // for interno
				totalContatos--;
				printf("\nRegistro excluido com sucesso");
				retornar();
			} // if 
			else {
				printf("Registro nao encontrado!");
				retornar();
			}
		} //for
	}
}

// easterEgg
void easterEgg() {
	printf("\nSeja bem vindo(a) a agenda jedi)");
	printf("\nDesenvolvido por: Alysson");
	printf("\nAgenda de contatos V.2.0");
	printf("\nData: 19.09.2024");
	printf("\nObrigado(a) por usar nossa agenda!");
	retornar();
}

//Função Principal
int main () {
	// Variavel de opção
	int opcao;
	
	while (1) {
	menu();
	scanf("%i", &opcao);
	getchar();
	
	switch (opcao) {
		
		case 1: cadastrarContato();
				break;
		
		case 2: listarContatos();
				break;
				
		case 3: pesquisarContato();
				break;
		
		case 4: removerContato();
				break;
		
		case 5: printf("Saindo...\n");
				exit(0);
	
		case 6: easterEgg();
				break;
				
		default: printf("\nOpcao invalida!!\n");
				 retornar();

		
		} // switch
	
	} // while	
	
	return 0;
}