concatena([], L, L).

concatena([H|L1], L2, [H|L3]):-
    concatena(L1, L2, L3).



rev([],[]).

rev([H|T], Inv) :- 
    rev(T,TInv),
    concatena(TInv,[H],Inv).



palindromo(X):-
    rev(X,X).
