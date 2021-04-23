/*
conjunto([]).
conjunto([X,Y]):-
    X \== Y.


conjunto([X,X1|Xs]):-
    X \== X1,
    cojunto([X1|Xs]).

conjunto([X,X1|Xs]):-
    X \== X1,
    cojunto([X|Xs]).


subconjunto(X,Y):-
    subset(X,Y).
*/

subconjunto([], []).
subconjunto([E|Tail], [E|NTail]):-
  subconjunto(Tail, NTail).
subconjunto([_|Tail], NTail):-
  subconjunto(Tail, NTail).