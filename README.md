# Sistema Básico de Caixa Hortifruti
Como projeto semestral da faculdade, foi solicitado um sistema de hortifruti feito em ambiente Console C. Incluí todos os produtos desejados em um arquivo de texto do bloco de notas (produtos.txt), o qual o código lê linha por linha e armazena cada produto em uma variável dentro do algoritmo, além de seus códigos e valores por kg. Para facilitar o trabalho, usei uma struct, e criei um elemento vetor dentro dela.

## Tecnologias Usadas
- **Linguagens**: C
- **Ferramentas**: Git

## Instruções de Uso
1. Certifique-se de que o arquivo 'produtos.txt' está dentro de pasta bin/debug.
2. Compile e execute o código.

## Funcionamento
Assim que o sistema é iniciado, caso o usuário deseje registrar uma compra, será necessário informar o código do produto. O sistema automaticamente detecta de qual produto se trata e seu peso por kg, somente através desse código fornecido pelo usuário. O usuário então fornece quanto daquele produto está sendo comprado, ou seja, o peso em gramas, e logo o sistema calcula o valor. É possível adicionar quantos produtos desejar e, após a compra ter sido finalizada, é possível iniciar uma nova, sem necessidade de reiniciar o console. Também há cálculo de troco.

## Demonstração
Exemplo de gif será inserido depois

## Licença
Este projeto é licenciado sob a Licença MIT. Veja o arquivo [LICENSE](https://github.com/mincostta/sistema-hortifruti/blob/main/LICENSE) para mais detalhes.
