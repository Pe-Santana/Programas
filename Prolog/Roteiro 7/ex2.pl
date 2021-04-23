/*

Negação como falha:

neg(Objetivo):- Objetivo, !, fail. 
neg(Objetivo).

aprecia(vicente,X):- 
    hamburguer(X),
    neg(bigKahunaBurger(X)). 

hamburguer(X):-  bigMac(X).
hamburguer(X):-  bigKahunaBurger(X).
hamburguer(X):-  whopper(X).

bigMac(a). 
bigKahunaBurger(b).
bigMac(c).
whopper(d).


?- aprecia(vicente,X).
X = a ;
X = c ;
X = d.


Com combinação de corte:


aprecia(vicente,X):- 
    hamburguer(X),
    \+ bigKahunaBurger(X). 

hamburguer(X):-  bigMac(X).
hamburguer(X):-  bigKahunaBurger(X).
hamburguer(X):-  whopper(X).

bigMac(a). 
bigKahunaBurger(b).
bigMac(c).
whopper(d).

?- aprecia(vicente,X).
X = a ;
X = c ;
X = d.

Combinação de corte no lugar errado:

aprecia(vicente,X):-
    \+ bigKahunaBurger(X),
    hamburguer(X).
    
hamburguer(X):-  bigMac(X).
hamburguer(X):-  bigKahunaBurger(X).
hamburguer(X):-  whopper(X).

bigMac(a). 
bigKahunaBurger(b).
bigMac(c).
whopper(d).

?- aprecia(vicente,X).
X = a ;
X = c ;
X = d.

?- aprecia(vicente,X).
false.

*/