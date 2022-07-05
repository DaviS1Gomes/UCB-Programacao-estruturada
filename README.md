# UCB-Programacao-estruturada

Questão 8 -  Quando passamos um vetor para um função em C, esta alocará um ponteiro para o elemento zero do vetor. Por que a linguagem C simplesmente não cria uma nova cópia local do vetor, como faz com os números inteiros?

Resposta: Pois na linguagem C, utiliza o ponteiro como parâmetro da função, ou seja, na realidade é um endereço inicial do vetor e não um é um elemento, Resumindo um endereço fixo, por isso não copia, para alterar precisa altera o código inteiro
