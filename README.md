# Desafio Batalha Naval - Nível Novato 🚢

Este projeto faz parte da minha jornada de aprendizado na linguagem C. O objetivo deste desafio foi construir a estrutura básica de um jogo de Batalha Naval, focando na manipulação de matrizes e vetores.

## 🚀 O que este código faz:
- **Criação do Tabuleiro:** Representação de um campo de batalha de 10x10 usando matrizes bidimensionais.
- **Inicialização de Dados:** Todo o tabuleiro começa preenchido com o valor `0`, representando a água.
- **Posicionamento de Navios:** Foram posicionados dois navios de tamanho 3 (representados pelo valor `3`):
  - Um posicionado na **horizontal** (Linha 2, Colunas 3 a 5).
  - Um posicionado na **vertical** (Coluna 8, Linhas 5 a 7).
- **Visualização:** O programa imprime o tabuleiro no console de forma organizada para facilitar a leitura.

## 🛠️ Conceitos Estudados:
- Declaração e inicialização de matrizes `int tabuleiro[10][10]`.
- Estruturas de repetição aninhadas (`for` dentro de `for`).
- Controle de índices para posicionamento estratégico.

## 💻 Como rodar o projeto:
1. Tenha um compilador C (como o GCC) instalado ou use o GitHub Codespaces.
2. Compile o arquivo: `gcc batalhaNaval.c -o batalhaNaval`
3. Execute o programa: `./batalhaNaval`
