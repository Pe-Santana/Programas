classe(Num, positivo):- 
    Num > 0,
    !.

classe(0, zero):-
    !.

classe(Num, negativo):-
    Num < 0.