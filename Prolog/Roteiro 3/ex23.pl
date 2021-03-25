remove(X,[X|XS],XS).

remove(X,[Y|YS],[Y|G]):-
    remove(X,YS,G).


permutacao([],[]).
permutacao(Xs,[Y|Zs]):-
    remove(Y,Xs,Ys),
    permutacao(Ys,Zs).




arranjo(0,[_|_],0).
arranjo(_,[],[]).

arranjo(X,[Y|YS],Z):-

