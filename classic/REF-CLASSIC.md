# Guia de referência para programas com algoritmos clássicos

## Contagem

1. Iteração
2.  Variável contadora
    - Criar um inteiro
    - Inicializá-lo com 0 antes de iterar
3.  Incrementar o contador na iteração

## Filtragem / seleção

1.  Iteração
2.  Existe uma condição para aceitar o dado no processo (contar, acumular, etc.)
3.  Existe um condicional no centro da iteração

## Soma / acumulação

1.  Iteração
2.  Variável de totalização/acumulação
    - O tipo deve acompanhar o tipo dos dados fornecidos
    - Inicializá-la com 0 antes de iterar
3.  Fazer a soma sobre a mesma variável

## Média

1.  Acumulação
2.  Contagem
3.  Dividir uma vez após as iterações
    - **NÃO REALIZAR A DIVISÃO NA ITERAÇÃO**

## Extremos (máximo e mínimo)

1. Iteração
2. Variável campeã
    -   O tipo deve ser o mesmo tipo dos dados
    -   Inicializá-la com o valor mais fraco possível (perde de todos)
        -   Máximo: menor valor possível
        -   Mínimo: maior valor possível
3.  Se um dado bater a campeã, esse dado passa a ser o campeão
    -   A variável campeã é A MEMÓRIA DE TODOS OS EMBATES ATÉ AQUI

## Busca um dado que atende a uma propriedade / decidir se nem todos atendem propriedade

1. Iteração
2. Propriedade / predicado a ser testado como condição
3. Técnica de _flag_
    -   Cria-se uma variável booleana como indicadora da presença da propriedade em algum dado
    -   Limpa-se a _flag_ antes da iteração (ausência da propriedade) antes da iteração
        - EM NENHUM OUTRO MOMENTO NESSA BUSCA essa _flag_ deve ser limpa novamente
4.  Durante a iteração, testa-se se a propriedade vale para cada dado digitado
    -   Em caso afirmativo, registra-se isso na _flag_, sujando-a
5.  Depois da iteração, testa-se se a _flag_ está limpa ou suja
    -   No caso de ter sujado, o programa informa que a busca foi bem sucedida

30. Técnica de contagem
    -   Cria-se uma variável contadora
    -   Depois da interação, compara-se essa variável com 0
        - Diferente 0 indica a ocorrência da propriedade
        - Igual a 0 indica a não ocorrência

## Entrada de múltiplos dados por iteração

O problema é solicitar o resultado de um dado considerando propriedades do outro
-   A solução é registrar os dois dados (2 variáveis)

