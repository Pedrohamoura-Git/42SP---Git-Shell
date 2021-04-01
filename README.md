# 42SP--Git-Shell


	ATALHOS NO TECLADO

* ctrl + C --> Sai do comando atual;  
* ctrl + D --> Apaga o início da linha;  
* ctrl + L --> Limpa o terminal de comando;  

	GUIA DE COMANDOS SHELL & GIT

- cd --> "Change Directory" | Altera o diretório atual do shell;  
	- |->   cd .. --> Volta para o diretório anterior;  
	

- chmod --> "Change the Mode" | Altera os direitos de um arquivo;  
 	- |-> chmod a --> Altera os direitos de todos;  
 	- |-> chmod g --> Altera os direitos do grupo;  
 	- |-> chmod o --> Altera os direitos dos outros;
	- |-> chmod u --> Altera os direitos do usuário;
		- |-> chmod + --> Adiciona direitos;  
		- |-> chmod - --> Remove direitos;  
			- |-> r --> Altera o direito de ler;  
			- |-> w --> Altera o direito de editar;  
			- |-> x --> Altera o direito de executar;  
	

 EX: o+r [PARÂMETRO] --> Adiciona o direito de ler o arquivo indicado em [PARÂMETRO] aos outros;  
 EX2: a-x [PARÂMETRO] --> Remove o direito de executar o arquivo indicado a todos;  
 
 * cut [OPTION] **Nome do arquivo** --> Corta o texto em local específicado e imprime o novo texto na tela; Precisa ser combinada com os seguintes comandos (OPTIONS):  
 	- -b (byte);  
 	- -d (--delimiter) 'parte à cortar' -f(--fields)=N°;  
 * diff --> "DIfferent" | Compara dois arquivos, linha por linha, e imprime na tela os erros encontrados junto com suas respectivas linhas;
 

* git add --> Prepara o(s) arquivo(s) para ser(em) comitado(s);  
* git clone --> Copia um repositório do Git existente;  
* git commit -m"descrição do arquivo"--> Faz o commit do arquivo;  
* git push  --> Faz o push do arquivo para o repositório;  
* git status --> Mostra o status atual do repositório local;  
	* |-> --ignored --> Mostra uma lista de todos os arquivos ignorados;  
* grep --> Serve como filtro. Procura, por toda a linha, por carcteres iguais aos especificados;  
  
* ls --> "List" | Mostra uma lista com todos os elementos dentro do diretório atual, sem diferenciá-los;
	- |-> ls -la --> Mostra os arquivos ocultos dentro do diretório atual;  
	- |-> ls -l --> Mostra uma lista detalhada dos elementos dentro do diretório atual;
	- |-> ls -p --> Mostra uma barra (/) no final de todos os diretórios, diferenciândo-os;  
  
* mkdir --> "Make Directory" | É usado para criar novos diretórios;  
  
* mv --> "Move" | Move e/ou renomeia os arquivos de um diretório;  
  
* pwd --> "print working directory" | Mostra o diretório atual;  

* rm --> "Remove" | Remove o(s) arquivo(s) desejado(s);  
	- |->   rm -r nome_do_diretório --> Apaga o diretório (pasta);  
 	- |->   rm -f nome_do_diretório --> Apaga sem precisar confirmar o comando;  
	- | rmdir --> "Remove Directory" | Exclui o diretório desejado, desde que ele esteja vazio;  
    
 * --short --> Abrevia o nome de um arquivo, diretório, usuário etc, quando combinado com um comando anterior.
 	* Ex: git status --ignored --short;  

* touch - Cria um arquivo ou altera as propriedades de um arquivo existente;  
	- |-> -d --> Altera à data e hora de um arquivo; Ex: "2021-03-30 01:00:00" Teste;  

wget <link> --> Faz o download de um arquivo;  
  
	DIREITOS DE COMANDO

Exitem três grupos de símbolos que representam o usuário, seu grupo e o resto do mundo.  

