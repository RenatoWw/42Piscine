# ✅ rush-02 - Plano de Ação do Grupo

## 👥 Membros do grupo
- Pessoa 1 – Parsing do dicionário
- Pessoa 2 – Validação e conversão do número
- Pessoa 3 – Impressão, tratamento de erros, free e Makefile

---

## 🔧 Etapas do Projeto

### 🧩 Etapa 1 – Leitura e parsing do dicionário (Pessoa 1)
- [ ] Abrir o arquivo com `open` e ler com `read`
- [ ] Ignorar linhas vazias
- [ ] Separar número e valor, ignorando espaços em volta
- [ ] Armazenar pares `número → palavra` em structs
- [ ] Tratar erros de parsing (ex: linha mal formatada)
- [ ] Retornar "Dict Error\n" se o dicionário estiver inválido
- [ ] Criar função:
  - `DictEntry *parse_dict(char *filename);`

---

### 🧩 Etapa 2 – Validação e conversão do número (Pessoa 2)
- [ ] Validar número de argumentos (1 ou 2)
- [ ] Verificar se o número é válido (positivo, inteiro)
- [ ] Tratar erros de entrada → `Error\n`
- [ ] Converter número em palavras usando o dicionário
- [ ] Criar função:
  - `char *number_to_words(char *number, DictEntry *dict);`
- [ ] Lidar com números grandes (maiores que `unsigned int`)

---

### 🧩 Etapa 3 – Impressão, erros e memória (Pessoa 3)
- [ ] Imprimir resultado com `write`
- [ ] Imprimir mensagens de erro com `write` corretamente
- [ ] Liberar toda memória alocada com `free`
- [ ] Criar função:
  - `void print_result(char *words);`
  - `void free_dict(DictEntry *dict);`

---

### 🧩 Etapa 4 – Makefile (Pessoa 3)
- [ ] Criar Makefile com as regras:
  - `make` → compila todos os arquivos
  - `make fclean` → remove arquivos `.o` e binário
- [ ] Nome do executável: `rush-02`

---

## 🧪 Testes
- [ ] `./rush-02 42` → `forty two`
- [ ] `./rush-02 0` → `zero`
- [ ] `./rush-02 10.4` → `Error`
- [ ] `./rush-02 100000` → `one hundred thousand`
- [ ] `./rush-02 meu.dict 20` → usar valor do dicionário customizado
- [ ] Dicionário com linhas inválidas → `Dict Error`
- [ ] Entrada inválida → `Error`

---

## 📝 Extras
- [ ] Garantir que nenhuma função proibida seja usada (`printf`, etc)
- [ ] Nenhum vazamento de memória
- [ ] Organização clara dos arquivos
