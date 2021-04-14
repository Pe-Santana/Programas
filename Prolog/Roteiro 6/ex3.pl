
tipotermo(X,Y):-
    atom(X),
    Y = atomo.

tipotermo(X,Y):-
    var(X),
    Y = variavel.
    
tipotermo(X,Y):-
    number(X),
    Y = numero.

tipotermo(X,Y):-
    atomic(X),
    Y = constante.


tipotermo(X,Y):-
    atomic(X),
    Y = termo_simples;
    var(X),
    Y = termo_simples.

tipotermo(X,Y):-
    nonvar(X),
    functor(X,_,A),
    A>0,
    Y = termo_complexo.

tipotermo(X,Y):-
    nonvar(X),
    functor(X,_,A),
    A>0,
    Y = termo;
    atomic(X),
    Y = termo;
    var(X),
    Y = termo.

