# Simulação de Movimentação de Peças de Xadrez em C

Este projeto implementa a movimentação de quatro peças de xadrez: **Torre, Bispo, Rainha e Cavalo**, utilizando **recursão** e **loops aninhados**, conforme os desafios do curso de C.

O objetivo é demonstrar a aplicação de **estruturas de repetição**, **recursividade** e **controle de fluxo (break/continue)** para simular movimentos no tabuleiro.

---

## Funcionalidades

1. **Torre**  
   - Move-se horizontalmente para a direita.  
   - Implementado com **função recursiva**.

2. **Bispo**  
   - Move-se na diagonal (Cima e Direita).  
   - Implementado com **recursão** e **loops aninhados** (loop externo vertical e loop interno horizontal).

3. **Rainha**  
   - Move-se horizontalmente para a esquerda.  
   - Implementado com **função recursiva**.

4. **Cavalo**  
   - Movimento em “L”: duas casas para cima e uma para a direita.  
   - Implementado com **loops aninhados complexos**, utilizando `for` e `while` com `break` e `continue` para controle de fluxo.

---

## Como Executar

1. **Clone o repositório:**
```bash
git clone <URL_DO_SEU_REPOSITORIO>
Compile o programa:

bash
Copiar código
gcc xadrez.c -o xadrez
Execute o programa:

bash
Copiar código
./xadrez
Estrutura do Código
moverTorre(int casas): Função recursiva que imprime "Direita" para cada casa percorrida.

moverBispo(int casasVerticais, int casasHorizontais): Função recursiva com loop aninhado que imprime "Cima, Direita" para cada casa da diagonal.

moverRainha(int casas): Função recursiva que imprime "Esquerda" para cada casa percorrida.

Movimento do Cavalo: Loop for externo para cada passo do L, while interno para movimentação vertical e for interno para horizontal, com uso de break e continue.

Exemplo de Saída
java
Copiar código
Movimento da Torre (5 casas para a direita):
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo (5 casas diagonais Cima, Direita):
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha (8 casas para a esquerda):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo (2 casas para cima, 1 para a direita):
Cima
Cima
Direita
Observações
Todos os movimentos estão pré-definidos pelo código e não requerem entrada do usuário.

O código foi desenvolvido para demonstrar recursão e loops complexos, não para simular um jogo completo de xadrez.

Comentários detalhados explicam a lógica de cada peça e o controle de fluxo utilizado.

Autor
Marcelo Carvalho
