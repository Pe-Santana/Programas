%d)

diferenca([],_,[]).

diferenca([X|XS],[X|YS],G):-
   diferenca(XS,YS,G).

diferenca([X|XS],[_|YS],[X|T]):-
    diferenca(XS,YS,T).

diferenca([X|_],[_|YS],[X|T]):-
    diferenca(X,YS,T).