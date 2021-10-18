/*Em outro exemplo com mais aplicação prática, digamos que se quer corresponder todos os termos que ficam entre aspas em um texto. Se fizéssemos simplesmente a regex  /".*"/, diante de um texto com múltiplas ocorrências de termos entre aspas, como: 'Eu "gosto" muito de "estudar" regex', a nossa expressão regular seria gulosa e selecionaria o maior texto possível que correspondesse à definição, nesse caso, selecionando '"gosto" muito de "estudar"', pois todo esse texto está compreendido entre a primeira aspa (antes de 'gosto') e a última aspa (após 'estudar'), o que é um resultado talvez indesejado.
Se usarmos a regex /".*?"/, com o operador não-guloso, as correspondências para a mesma frase seriam '"gosto"' e '"estudar"' separadamente, conforme era a intenção inicial.*/

//ex: seleciona em um texto tudo que tem tag html, e tudo que está dentro da tag html 

const greedy = /<.+>.+<\/.+>/gim
const nongreedy = /<.+?>.+?<\/.+?>/gim