somaUm([],[]).
somaUm([L|LS],[X|XS]) :-
    
    X is L+1,
    somaUm(LS,XS).
