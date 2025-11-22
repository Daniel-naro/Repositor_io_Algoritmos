#include <stdio.h>

	int main (){
		
		int livro=1, cat0, cat1=0, cat2=0, cat3=0, cond0=0, cond1_1=0, cond2_1=0, cond3_1=0,cond1_2=0, cond2_2=0, cond3_2=0, cond1_3=0, cond2_3=0, cond3_3=0;
		
			printf("Escolha uma categoria: (Matematica-1, Ciencias-2, Geografia-3)");
		
		for(livro=1; livro<=15;livro++){
			printf("\nLivro: %i \n", livro);
			printf("Categoria: ");
			scanf("%i", &cat0);
			switch(cat0) {
				case 1:
					cat1++;
					printf("Estado de Conservacao:(Novo-1,Bom-2,Ruim-3) \n");
					printf("Condicao do livro: ");
					scanf("%i", &cond0);
					switch(cond0) {
				case 1:
					cond1_1++;
					break;
				case 2:
					cond2_1++;
					break;
				case 3:
					cond3_1++;
					break;
				
			}
					break;
				case 2:
					cat2++;
					printf("Estado de Conservacao:(Novo-1,Bom-2,Ruim-3) \n");
					printf("Condicao do livro: ");
					scanf("%i", &cond0);
					switch(cond0) {
				case 1:
					cond1_2++;
					break;
				case 2:
					cond2_2++;
					break;
				case 3:
					cond3_2++;
					break;
				
			}
					break;
				case 3:
					cat3++;
					printf("Estado de Conservacao:(Novo-1,Bom-2,Ruim-3) \n");
					printf("Condicao do livro: ");
					scanf("%i", &cond0);
					switch(cond0) {
				case 1:
					cond1_3++;
					break;
				case 2:
					cond2_3++;
					break;
				case 3:
					cond3_3++;
					break;
				
			}
					break;
				
			}
			
			
		}
		printf("\nCategoria: \nMatematica: %i Livros\nCondicao: Novo: %i, Bom:%i, Ruim: %i \n\n", cat1, cond1_1, cond2_1, cond3_1 );
		printf("\nCategorias: \nCiencias: %i Livros\nCondicao: Novo: %i, Bom:%i, Ruim: %i \n\n", cat2, cond1_2, cond2_2, cond3_2 );
		printf("\nCategorias: \nGeografia: %i Livros\n\nCondicao: Novo: %i, Bom:%i, Ruim: %i \n\n", cat3, cond1_3, cond2_3, cond3_3 );
		
}
