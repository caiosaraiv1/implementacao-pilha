# Implementação de Estrutura de Dados - Pilha

Este repositório contém implementações da estrutura de dados **Pilha** em duas linguagens de programação diferentes: C e Java. A pilha é uma estrutura de dados linear que segue o princípio LIFO (Last In, First Out), onde o último elemento adicionado é o primeiro a ser removido.

## Estrutura do Repositório

```
.
├── C/
│   ├── pilha.h
│   ├── pilha.c
│   └── main.c
└── Java/
    ├── Pilha.java
    └── Teste.java
```

## Implementação em C

A implementação em C usa alocação dinâmica de memória para criar a pilha e seus elementos.

### Arquivos

- **pilha.h**: Arquivo de cabeçalho que contém a definição da estrutura `Pilha` e as declarações das funções.
- **pilha.c**: Implementação das funções para manipular a pilha.
- **main.c**: Programa de exemplo que demonstra o uso da pilha.

### Funções Disponíveis

- `Pilha* criar_pilha(int tamanho)`: Cria uma nova pilha com o tamanho especificado.
- `bool is_empty(Pilha *p)`: Verifica se a pilha está vazia.
- `bool is_full(Pilha *p)`: Verifica se a pilha está cheia.
- `void push(int e, Pilha *p)`: Adiciona um elemento ao topo da pilha.
- `void pop(Pilha *p)`: Remove e imprime o elemento do topo da pilha.
- `void topo(Pilha *p)`: Imprime o elemento do topo da pilha sem removê-lo.
- `void liberar_pilha(Pilha *p)`: Libera a memória alocada para a pilha.

### Exemplo de Uso

```c
Pilha *minha_pilha = criar_pilha(5);
push(10, minha_pilha);
push(20, minha_pilha);
topo(minha_pilha);  // Imprime: 20
pop(minha_pilha);   // Remove e imprime: 20
liberar_pilha(minha_pilha);
```

## Implementação em Java

A implementação em Java usa um array para armazenar os elementos da pilha e lança exceções para tratar erros.

### Arquivos

- **Pilha.java**: Classe que implementa a estrutura de dados pilha.
- **Teste.java**: Programa de exemplo que demonstra o uso da pilha.

### Métodos Disponíveis

- `Pilha()`: Construtor que cria uma pilha com tamanho padrão (10).
- `Pilha(int tamanho)`: Construtor que cria uma pilha com o tamanho especificado.
- `boolean isEmpty()`: Verifica se a pilha está vazia.
- `boolean isFull()`: Verifica se a pilha está cheia.
- `void push(int e)`: Adiciona um elemento ao topo da pilha.
- `void pop()`: Remove e imprime o elemento do topo da pilha.
- `int topo()`: Retorna o elemento do topo da pilha sem removê-lo.

### Exemplo de Uso

```java
Pilha minhaPilha = new Pilha(3);
try {
    minhaPilha.push(10);
    minhaPilha.push(20);
    System.out.println(minhaPilha.topo());  // Imprime: 20
    minhaPilha.pop();  // Remove e imprime: 20
} catch (Exception e) {
    System.out.println("Erro: " + e.getMessage());
}
```

## Diferenças entre as Implementações

| Característica | C | Java |
|----------------|---|------|
| Tratamento de Erros | Mensagens de erro | Exceções |
| Memória | Alocação dinâmica | Array fixo |
| Retorno `pop()` | Void (imprime valor) | Void (imprime valor) |
| Retorno `topo()` | Void (imprime valor) | int (retorna valor) |
| Gerenciamento de Memória | Manual (liberar_pilha) | Automático (Garbage Collector) |

## Como Compilar e Executar

### C

```bash
gcc pilha.c main.c -o pilha_teste
./pilha_teste
```

### Java

```bash
javac pilha/Pilha.java pilha/Teste.java
java pilha.Teste
```
