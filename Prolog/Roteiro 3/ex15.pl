prodEsc([],[],0).

prodEsc([X|XS],[Y|YS],N):-
    prodEsc(XS,YS,G),
    N is X*Y+G.



