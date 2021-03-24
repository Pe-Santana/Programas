prodEsc([],[],_).

prodEsc([X|XS],[Y|YS],[N|NS]):-
    N is *(X,Y),
    prodEsc(XS,YS,NS).


