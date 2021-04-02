sem_repeticao([],[]).

sem_repeticao([X|XS], G):-    
    member(X, XS),
    sem_repeticao(XS, G).

sem_repeticao([X|XS], [X|XS1]):-
    \+member(X, XS),
    sem_repeticao(XS, XS1).