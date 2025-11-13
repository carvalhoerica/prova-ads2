#include <stdio.h> //bliblioteca escrita errada
#include <stdlib.h> //bliblioteca escrita errada

void cadastraLivro();
void listaLivro();
void buscaLivro();
void emprestaLivro();
void menuPrincipal();

int main() {
    menuPrincipal(); //faltou ";"
    return 0; //faltou ";"
}

char titulo1[40], titulo2[40], titulo3[40], titulo4[40], titulo5[40];
int emprestado1, emprestado2, emprestado3, emprestado4, emprestado5;

char strcmp;

void menuPrincipal() {
    int opcao; //declarado errado
    do {
        printf("\n=== MENU BIBLIOTECA ===\n");
        printf("1 - Cadastrar Livro\n");
        printf("2 - Listar Livros\n");
        printf("3 - Buscar Livro\n");
        printf("4 - Emprestar Livro\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao); //tava "%f" ao inves de "%d

        switch(opcao) {
            case 1:
                cadastraLivro(); //escrito de forma diferente do que foi declarado
                break;
            case 2:
                listaLivro(); //escrito de forma diferente do que foi declarado
                break;
            case 3:
                buscaLivro();
                break;
            case 4:
                emprestaLivro(); //escrito de forma diferente do que foi declarado
                break;
            case 5:
                printf("Saindo...\n"); //faltou ";"
                break;
            default:
                printf("Opção invalida\n"); //faltou ";"
        }
    } while(opcao != 5); //faltou ";"
}

void cadastraLivro() {
    printf("\n--- Cadastro de Livros ---\n");
    printf("Digite o titulo do primeiro livro: ");
    gets(titulo1);
    printf("Digite o titulo do segundo livro: ");
    gets(titulo2);
    printf("Digite o titulo do terceiro livro: ");
    gets(titulo3);
    printf("Digite o titulo do quarto livro: ");
    gets(titulo4);
    printf("Digite o titulo do quinto livro: ");
    gets(titulo5);
    printf("Livros cadastrados com sucesso\n"); //faltou ";"
}

void listaLivro() {
    printf("\n--- Lista de Livros ---\n");
    printf("Livro 1: ");
    printf(titulo1);
    printf("Livro 2: ");
    printf(titulo2);
    printf("Livro 3: ");
    printf(titulo3);
    printf("Livro 4: ");
    printf(titulo4);
    printf("Livro 5: ");
    printf(titulo5);
    if(emprestado1 = 1) printf("Livro 1 emprestado\n");
    if(emprestado2 = 1) printf("Livro 2 emprestado\n");
}

void buscaLivro() {
    char nome[40];
    int achou = 0;
    printf("\nDigite o nome do livro que quer buscar: ");
    gets(nome);
    
    if(strcmp(nome, titulo1) == 0) achou = 1;
    if(strcmp(nome, titulo2) == 0) achou = 1;
    if(strcmp(nome, titulo3) == 0) achou = 1;
    if(strcmp(nome, titulo4) == 0) achou = 1; //faltou esse
    if(strcmp(nome, titulo5) == 0) achou = 1; //faltou esse

    if(achou = 1)
        printf("Livro encontrado\n");
    else
        printf("Livro nao encontrado\n");
}

void emprestaLivro() {
    int numero;
    printf("\nQual o numero do livro: ");
    scanf("%d", &numero); //faltou "&"
    if(numero < 1 || numero > 5) {
        printf("Numero invalido\n");
    } else {
        emprestado1 == 1;
        printf("Emprestimo feito com sucesso\n");
    }
}

