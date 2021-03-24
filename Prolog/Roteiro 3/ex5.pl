subconjunto([],[]).

subconjunto([X|XS], [Y|YS]):-
    X =:= [Y|YS]; subconjunto(X, YS),   
    subconjunto(XS,[Y|YS]).