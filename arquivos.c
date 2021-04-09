#include <stdio.h>

int main(){

    FILE *arq;
    char c;
    //fopen(nome-arquivo, forma-abertura)
    //W - 
    //R -
    //RA

    arq = fopen("file.txt", "r");

    if (arq){
        while ((c = getc(arq)) != EOF) //EOF = End of File
        {
            printf("%c", c);
        }              
    }else{
        printf("Não achei o arquivo");
        }
        
    


    fclose(arq);
    

    return 0;
}