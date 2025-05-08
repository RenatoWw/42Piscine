/**********Guia Básico de Git com Branches********
****** 1. Criação de uma nova branch ******

	Para criar uma branch e já mudar para ela:

git checkout -b nome-da-branch

****** 2. Verificando o status ******

	Sempre verifique o status antes de fazer commits:

git status 

****** 3. Adicionando arquivos para commit ******

	Se você modificou algum arquivo, adicione-o ao staging:

git add arquivo-modificado.c 

	Para adicionar todos os arquivos modificados:

git add .

****** 4. Fazendo o commit ******

	Faça o commit com uma mensagem explicativa:

git commit -m "Mensagem do commit explicando a mudança" 

****** 5. Enviando a branch para o repositório remoto (push) ****** 

	Antes de dar o push, sempre verifique se a branch remota já existe e se está atualizada:

git pull origin nome-da-branch

	Depois de atualizar, faça o push da sua branch para o repositório remoto:

git push origin nome-da-branch

****** 6. Atualizando sua branch com mudanças do repositório remoto ****** 

	Para pegar as atualizações mais recentes do repositório remoto sem mesclar:

git fetch

	Ou, para baixar as alterações e já mesclar automaticamente:

git pull origin nome-da-branch

****** 7. Mudando de branch (sempre faça git pull antes de trocar de branch) ****** 

	Para mudar para outra branch:

git checkout nome-da-outra-branch

****** 8. Fazendo merge de uma branch em outra ****** 

	Para fazer merge de uma branch (por exemplo, "nova-funcionalidade") na branch principal (por exemplo, "main"), faça:

	Vá para a branch principal:

git checkout main

	Faça o merge:

git merge nova-funcionalidade

Resolva possíveis conflitos e depois faça o commit.

****** 9. Deletando a branch (quando não for mais necessária) ****** 

	Após o merge, pode excluir a branch local:

git branch -d nome-da-branch

	E também a branch remota:

git push origin --delete nome-da-branch

🔑 Dicas importantes para segurança
Evite trabalhar diretamente na branch main ou master. Crie uma branch para cada nova funcionalidade ou correção.

Antes de dar push, sempre faça um git pull para garantir que você está atualizado com o repositório remoto.

Evite conflitos mantendo sua branch atualizada com o git pull regularmente.

Fique atento aos commits: Faça commits pequenos e frequentes com mensagens claras.

*****/