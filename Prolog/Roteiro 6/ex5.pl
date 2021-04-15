:- op(300, xfx , [sao,  e_um]).
:- op(300, fx, gosta_de ).
:- op(200, xfy , e).
:- op(100, fy, famoso ).

/*
?- X e_um bruxo.
está correto porem incompleto pois não existe o fato bruxo.
o operador principal é "e_um".
e_um(X,bruxo).

?- harry e ron e hermione sao amigos.
novamente esta correto porem incompleto pois não existe o fato amigos.
o operador principal é "sao".
sao([harry,ron,hermione],amigos).

?- harry e_um  mago e gosta_de  quadribol.
este por sua vez esta mal formado pois a precedencia de "e"  é menor que dos outros dois operadores("e_um" e "gosta_de").
o operador principal seria "e".
e(e_um(harry,mago),gosta_de(quadribol)).

?- dumbledore e_um famoso  famoso  mago.
correto porem a dupla busca com o operador "famoso" gera estranheza.
o operador principal é "e_um".
e_um(dumbledore,famoso(famoso(mago))).

*/

