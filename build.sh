#!/bin/bash

if [ ! -d "build" ]; then
  mkdir build
fi

cmake -B build -S .

if [ $? -ne 0 ]; then
  echo "Erro na configuração do CMake."
  exit 1
fi

cmake --build build

if [ $? -eq 0 ]; then
  echo "Build concluído com sucesso na pasta 'build'."

  EXECUTABLE=$(find build -type f -executable -print -quit)

  if [ -n "$EXECUTABLE" ]; then
    echo "Executando o binário: $EXECUTABLE"
    $EXECUTABLE
  else
    echo "Nenhum executável encontrado no diretório 'build'."
  fi
else
  echo "Ocorreu um erro durante o build."
  exit 1
fi
