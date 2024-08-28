# Compilador

## Expressao

```
expr
expr + digit
expr - digit + digit
digit - digit + digit
9 - 5 + 2
```

### Arvore de decisão

```
           expr
         /  |  \
       expr  - digit
      / | \      |
    expr  + digit 2
    / | \     |
  digit  9    5
    |
    9
```

## Build

Para realizar o procesos de build, você deve executar o script `./build.sh`

## Run

Para executar o compilador você pode rodar o script `./run.sh`

## Arquivos
