# 🏙️ Jogo de Cartas de Cidades – Projeto em C

Este projeto é um jogo de comparação de cartas de cidades desenvolvido em linguagem C. Cada carta representa uma cidade brasileira com atributos como estado, código, nome, população, área, PIB e número de pontos turísticos. O objetivo é comparar duas cartas e determinar qual é superior em cada critério.

## 🧮 Funcionalidades

- Leitura de dados para duas cartas de cidades;
- Cálculo da **Densidade Populacional** (habitantes por km²);
- Cálculo do **PIB per Capita** (PIB/população em reais);
- Cálculo do **Super Poder** de cada carta com base nos atributos numéricos;
- Comparação automática de todos os atributos e exibição da carta vencedora em cada item.

## 📊 Cálculos Realizados

- **Densidade Populacional:**  
  `densidade = população / área`

- **PIB per Capita:**  
  `pib_per_capita = (PIB * 1.000.000.000) / população`

- **Super Poder:**  
  Soma de:  
  `população + área + PIB + pontos turísticos + PIB per Capita + (1 / densidade)`

## 🧠 Regras de Comparação

- Para **Densidade Populacional**, vence a **carta com menor valor**;
- Para os demais atributos (incluindo Super Poder), vence a **carta com maior valor**;
- Os resultados das comparações são exibidos com a carta vencedora e o valor booleano (1 = vitória da Carta 1, 0 = vitória da Carta 2).

## 🛠️ Tecnologias Utilizadas

- Linguagem: C
- Compilador: GCC (ou compatível)
- Entrada/Saída padrão via terminal

## 🚫 Restrições (Simplificações Didáticas)

- O programa não utiliza estruturas de repetição (`for`, `while`) nem estruturas condicionais (`if/else`), apenas operadores ternários;
- Não utiliza `struct` para manter a simplicidade do código;
- Apenas duas cartas são manipuladas por execução.

## ▶️ Como Executar

1. Compile o código:
   ```bash
   gcc cartas_cidades.c -o cartas

2. Execute:
  ```bash
  ./cartas./cartas
```
📚 Objetivos Educacionais
Este projeto tem como objetivo reforçar conceitos de:

Tipos de dados primitivos em C (int, float, char, unsigned long int);

Manipulação de entrada via scanf, fgets, strtol, strtof;

Conversão de tipos e cálculos aritméticos;

Lógica de comparação e exibição de resultados.

