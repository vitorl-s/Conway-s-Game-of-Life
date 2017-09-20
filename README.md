Aluno: Vitor Leal dos Santos  
Matrícula: 16/0148375  

Como jogar:  

Após clonar o repositório, deve-se entrar na pasta do ep1 pelo terminal para executar alguns comandos , sendo eles:  

make clean  
make  
make run  

Opções de Jogo:  

1 - Blocks  
2 - Blinkers  
3 - Gliders  
4 - Gosper Glider Gun  
5 - Configurar a matriz de forma livre  

OBS 1 : Na hora de configurar sua matriz de forma livre na opção 5 , o tamanho não deve exceder 80x80;  
OBS 2 : Nos demais modos de jogo , só é possivel determinar a quantidade de gerações  
OBS 3 : Não é recomendável inserir espaço entre uma célula e outra na opção 5  
OBS 4 : Na main, foi incluída a biblioteca unistd.h para utilizar a função usleep com objetivo de criar uma certa animação no campo.  

Funcionamento do jogo:  

As células vivas são representadas pelo caractere o  
As células mortas são representadas pelo caractere -    

Regras do Jogo :   
1) Se uma celula viva tiver menos que duas celulas vivas ao seu redor, ela morre de solidão.  

2) Se uma celula viva tiver mais que três celulas vivas ao seu redor ela morre de superpopulação.  

3) Se uma celula estiver morta e tiver exatamente três celulas vivas ao seu redor, ela volta a vida.  

4) Se uma celula estiver viva e tiver duas ou três celulas vivas ao seu redor, ela continua viva.   
