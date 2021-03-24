multiEsc(_,[],[]).

multiEsc(X,[Y|YS],[Z|ZS]):-
    Z is *(X,Y),
    multiEsc(X,YS,ZS).