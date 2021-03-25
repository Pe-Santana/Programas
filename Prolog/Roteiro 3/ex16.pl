remove(X,[X|XS],XS).

remove(X,[Y|YS],[Y|G]):-
    remove(X,YS,G).

