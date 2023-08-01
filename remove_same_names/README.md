<h1 align="center">Remove Same Names</h1>

<p align="center">
  <a href="#problema">Problema</a> -
  <a href="#desenvolvimento">Desenvolvimento</a> -
  <a href="#saida">Saida</a> -
  <a href="#executar">Executar</a>
</p>
 

# Problema
### Crie uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura crie as seguintes ações:

+ Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova todas as réplicas sem mover os ”ponteiro“.
+ Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo dessas novas inserções?
**R:** Feito a remoção dos mesmos nomes, todo espaço vazio recebe um booleano com o valor true,dizendo que aquele espaço pode ser feito uma nova insercao.

# Desenvolvimento
O problema foi desenvolvido da seguinte maneira:

* É definido o tamanho da fila para 100, ou seja atribuindo o valor 100 para **N** na função **define** de acordo com o problema proposto.
![image](https://user-images.githubusercontent.com/55333375/167687864-cfee354a-280f-40b9-8620-3e4d98c5a979.png)

* Logo depois é criado um vetor de strings para armazenar os nomes que serão inseridos randomicamente na fila
![image](https://user-images.githubusercontent.com/55333375/167688070-369e09fa-0191-4b56-8908-ac63faf4e196.png)

* É feito a inserção de valores na fila por meio da função **rand()**

![image](https://user-images.githubusercontent.com/55333375/167688443-e813c2c5-05c5-409e-8e20-b4381eb61b88.png)

* Depois é executado a função **RemoveSameNames()**, onde será feita as comparações utilizando um ponteiro pra armazenar a variavel do vetor na posição **i** e comparando com todas as outras posições do vetor, assim removendo os nomes iguais e utilizando um booleano para identificar as posições onde pode haver novas inserções
![image](https://user-images.githubusercontent.com/55333375/167688700-8ecae710-6b1a-4fe6-9d7d-822094c07bb7.png)

* Por fim é feito a impressão da fila após a remoção dos nomes iguais

# Saida
#### É esperado que a saida tenha o print da lista depois de inserido os nomes randomicamente e por fim o print da lista após os nomes iguais serem alterados para **R**, alegando que aquela posição pode haver uma reinserção.
![image](https://user-images.githubusercontent.com/55333375/167689394-b94f5888-4114-4411-be22-2d2b2299fe47.png)


# Executar
* Como executar:

```
  make clean
  make
  make run
```
