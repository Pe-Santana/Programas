subconjunto([],[]).
subconjunto([X],[X|YS]).
subconjunto([X|XS], [Y|YS]):-
    subconjunto(X,YS),
    subconjunto(XS,[X|YS]).