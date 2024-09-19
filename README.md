# Agenda de Contatos V.2.0

Desenvolvedor: Alysson Gabriel\
Data: 19.09.2024\
Projeto: Aranouá (Samsung & IFAM)

## Descrição

A Agenda de Contatos V.2.0 é um aplicativo de console em C que permite gerenciar contatos. Os usuários podem cadastrar, listar, pesquisar e remover contatos, tudo através de um menu simples e intuitivo.

## Funcionalidades

- **Cadastrar contato**: Adicione novos contatos com nome, celular e email.
- **Listar contatos**: Visualize todos os contatos cadastrados.
- **Pesquisar contatos**: Encontre um contato específico pelo nome.
- **Remover contato**: Exclua contatos da agenda.
- **Easter Egg**: Uma mensagem especial para os usuários.

## Estrutura do Código

O código é organizado em funções que facilitam a manutenção e a leitura. As principais partes do código incluem:

- **Struct Contato**: Define a estrutura para armazenar informações de um contato (nome, celular, email).
- **Array agenda**: Um vetor para armazenar até 100 contatos.
- **Menu principal**: Função que exibe as opções disponíveis para o usuário.
- **Funções de operação**: Funções dedicadas para cada funcionalidade (cadastrar, listar, pesquisar, remover).

## Compilação e Execução

Para compilar o código, use um compilador de C. Você pode usar o GCC com o seguinte comando:

```bash
gcc -o agenda agenda.c
```
Para executar o programa:

```./agenda```

## Uso

1. Ao iniciar o programa, o usuário verá um menu com opções numeradas.
2. Insira o número da opção desejada e pressione Enter.
3. Siga as instruções na tela para realizar as operações.

## Requisitos

- Compilador de C (GCC ou similar)
- Sistema operacional: compatível com Linux e Windows