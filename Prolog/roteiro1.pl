pai(carlos,ana).
pai(carlos,juliana).
pai(carlos,daniel).
pai(joao,carlos).
pai(joao,julio).
pai(julio,jose).
pai(julio,sofia).


%Ex1:Estender o programa Prolog para incluir os relacionamentos mae,homem e mulher.

mae(carla,ana).
mae(carla,juliana).
mae(carla,daniel).
mae(vitoria,jose).
mae(vitoria,sofia).
mae(maria,carlos).
mae(maria,julio).
homem(carlos).
homem(julio).
homem(joao).
homem(daniel).
homem(jose).
mulher(carla).
mulher(ana).
mulher(juliana).
mulher(vitoria).
mulher(maria).
mulher(sofia).

%Ex2: Escrever em Prolog as seguintes consultas:

%•Quem ́e pai de Ana?

%?-pai(X,ana). 

%•Quem ́e pai de Quem?

%?-pai(X,Y). 

%•Quem ́e o avô de Ana?

%?-pai(Y,ana),pai(X,Y).


%Ex3: Escrever em Prolog as seguintes consultas:

avô(X,Y) :-
    pai(X,Z),
    pai(Z,Y).
mesmopai(X,Y) :-
    pai(Z,X),
    pai(Z,Y).

%•Quem sao os netos de Joao?
netos(X,Y) :-
    avô(Y,X).

%?-netos(X,joao).


%•Juliana e Ana tem o mesmo pai?

%?-mesmopai(ana,juliana).

%Ex4: Escreva regras para os relacionamentos filho,filha,irmao,irma,irmaos,tio,tia,primo,prima e avó.

%algumas regras foram escritas acima por motivos de formatação.
filho(daniel,carlos).
filho(daniel,carla).
filha(ana,carlos).
filha(juliana,carlos).
irmao(daniel,ana).
irmao(daniel,juliana).
irma(ana,juliana).
irma(ana,daniel).
irma(juliana,ana).
irma(juliana,daniel).
irmaos(X,Y) :-
    pai(Z,X),
    pai(Z,Y).
tio(julio,ana).
tio(julio,juliana).
tio(julio,daniel).
tio(carlos,jose).
tio(carlos,sofia).
tia(vitoria,ana).
tia(vitoria,juliana).
tia(vitoria,daniel).
tia(carla,jose).
tia(carla,sofia).
primo(jose,ana).
primo(jose,juliana).
primo(jose,daniel).
primo(daniel,sofia).
prima(sofia,ana).
prima(sofia,juliana).
prima(sofia,daniel).
prima(ana,jose).
prima(juliana,jose).
avó(X,Y) :-
    mae(X,Z),
    pai(Z,Y).


%4 Harry Potter


elfo_domestico(dobby).
bruxo(hermione).
bruxo('McGonagall').
bruxo(rita_skeeter).
feiticeiro(harry). %atribuido devido a ausencia no codigo principal e conforme informado na explicação do Ex5.
magico(X):-
    elfo_domestico(X).
magico(X):-
    feiticeiro(X).
magico(X):-
    bruxo(X).

%Quais das seguintes consultas sao satisfeitas? Onde relevante, de todas as instanciacoes de variaveis que levam ao sucesso.

%Ex5: magico(elfo_domestico).

%levando como referencia o codigo proporcionado, a busca não seria satisfeita pois a regra solicita argumentos inexistentes (feiticeiro(x).). Caso resolversemos a formula, a busca indicaria: false.
%para que a busca seja verdadeira, a variavel X deve ser igual ao atomo. Porem como existem 3 formataçoes para a regra magico, seria interesante concatena-las e dividilas por 'OU'.

%Ex6 feiticeiro(harry).

%como dito antes, devido a ausencia do conjunto 'feiticeiro', essa consulta nao seria possivel.
%para que seja satisfeita deve-se criar o conjunto 'feiticeiro' e atribuir 'harry' a ela.

%Ex7 magico(feiticeiro).

%idem a resposta 5.

%Ex8 magico('McGonagall').

%caso possua a correção do 'feiticeiro', essa atribuição seria verdadeira.

%Ex9 magico(Hermione).

%nessa situação, devido Hermione começar com letra maiuscula, Hermione é uma variavel.
%caso o objetivo seja saber se hermione é magica, deve-se procurar magico(hermione).


%Arvore em anexo no email.


palavra(artigo,um).
palavra(artigo,qualquer).
palavra(nome,criminoso).
palavra(nome,'mac lanche feliz').
palavra(verbo,come).
palavra(verbo,adora).
sentenca(Palavra1,Palavra2,Palavra3,Palavra4,Palavra5) :-
    palavra(artigo,Palavra1),
    palavra(nome,Palavra2),
    palavra(verbo,Palavra3),
    palavra(artigo,Palavra4),
    palavra(nome,Palavra5).

%Ex10 Qual consulta deve-se colocar a fim de encontrar quais sentencas a gramatica pode gerar?

%?-sentenca(A,B,C,D,E).

%Ex11 Liste todas as sentencas que esta gramatica pode gerar na mesma ordem em que o Prolog as geraria.
/*
A = D, D = um,
B = E, E = criminoso,
C = come
A = D, D = um,
B = criminoso,
C = come,
E = 'mac lanche feliz'
A = um,
B = E, E = criminoso,
C = come,
D = qualquer
A = um,
B = criminoso,
C = come,
D = qualquer,
E = 'mac lanche feliz'
A = D, D = um,
B = E, E = criminoso,
C = adora
A = D, D = um,
B = criminoso,
C = adora,
E = 'mac lanche feliz'
A = um,
B = E, E = criminoso,
C = adora,
D = qualquer
A = um,
B = criminoso,
C = adora,
D = qualquer,
E = 'mac lanche feliz'
A = D, D = um,
B = 'mac lanche feliz',
C = come,
E = criminoso
A = D, D = um,
B = E, E = 'mac lanche feliz',
C = come
A = um,
B = 'mac lanche feliz',
C = come,
D = qualquer,
E = criminoso
A = um,
B = E, E = 'mac lanche feliz',
C = come,
D = qualquer
A = D, D = um,
B = 'mac lanche feliz',
C = adora,
E = criminoso
A = D, D = um,
B = E, E = 'mac lanche feliz',
C = adora
A = um,
B = 'mac lanche feliz',
C = adora,
D = qualquer,
E = criminoso
A = um,
B = E, E = 'mac lanche feliz',
C = adora,
D = qualquer
A = qualquer,
B = E, E = criminoso,
C = come,
D = um
A = qualquer,
B = criminoso,
C = come,
D = um,
E = 'mac lanche feliz'
A = D, D = qualquer,
B = E, E = criminoso,
C = come
A = D, D = qualquer,
B = criminoso,
C = come,
E = 'mac lanche feliz'
A = qualquer,
B = E, E = criminoso,
C = adora,
D = um
A = qualquer,
B = criminoso,
C = adora,
D = um,
E = 'mac lanche feliz'
A = D, D = qualquer,
B = E, E = criminoso,
C = adora
A = D, D = qualquer,
B = criminoso,
C = adora,
E = 'mac lanche feliz'
A = qualquer,
B = 'mac lanche feliz',
C = come,
D = um,
E = criminoso
A = qualquer,
B = E, E = 'mac lanche feliz',
C = come,
D = um
A = D, D = qualquer,
B = 'mac lanche feliz',
C = come,
E = criminoso
A = D, D = qualquer,
B = E, E = 'mac lanche feliz',
C = come
A = qualquer,
B = 'mac lanche feliz',
C = adora,
D = um,
E = criminoso
A = qualquer,
B = E, E = 'mac lanche feliz',
C = adora,
D = um
A = D, D = qualquer,
B = 'mac lanche feliz',
C = adora,
E = criminoso
A = D, D = qualquer,
B = E, E = 'mac lanche feliz',
C = adora
*/

%são geradas nessa ordem pois assim sao atribuidas as regras de cima para baixo.

aluno(joao,poo).
aluno(pedro,poo).
aluno(maria,pl).
aluno(rui,pl).
aluno(manuel,pl).
aluno(pedro,pl).
aluno(rui,ed1).

%Ex12  Verifique que os fatos estao presentes na Base de Conhecimento (utilize o predicado listing).

%?- listing

%como o arquivo é extenso, foram listados todos os fatos, entre eles os fatos "aluno" estão presentes.

%Ex13 Escreva uma consulta que verifique se joao ́e aluno de pl.

%aluno(joao,pl).

% O resultado é falso pois de fato joao é aluno apenas de poo.

%Ex14 Escreva uma consulta que verifique se rui ́e aluno de poo.

%aluno(rui,poo).

% O resultado é falso pois de fato rui é aluno apenas de pl.


%Ex15 escreva uma consulta que verifique se joao e maria sao ambos alunosde ed1. joao e maria sao ambos alunos de ed1 se joao for aluno de ed1 e maria for aluna de ed1.

%aluno(joao,ed1),aluno(maria,ed1).

%resultado false.

%Ex16 Escreva uma consulta que permita saber quem ́e aluno de pl.

%aluno(X,pl).

/*
X = maria
X = rui
X = manuel
X = pedro
*/

%Ex17 Escreva uma consulta que permita saber as disciplinas em que rui e aluno.

%aluno(rui,Y).

/*
Y = pl
Y = ed1
*/

estuda(joao).
estuda(maria).
estuda(manuel).

%18 Sabendo que a aluno A faz a disciplina D se A e aluno de D e A estuda,escreva uma consulta que lhe permita saber se maria faz pl.

%?- aluno(maria,pl),estuda(maria).

%true.

%Ex19 Experimente agora a segunte consulta:

%?- aluno(X,pl), estuda(X).

%com base na consulta, é possivel entender que maria e manuel estudam pl porem joao nao é aluno dessa diciplina.


%Ex20  Utilizando a consulta anterior, acrescente à Base de Conhecimento o predicado fazpl/1 e escreva uma consulta que lhe permita saber quem faz pl.

fazpl(X) :-
    aluno(X,pl).

%?-fazpl(X).

/*
 * X = maria
X = rui
X = manuel
X = pedro
*/
