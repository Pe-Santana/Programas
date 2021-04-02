segmento([],[]).
segmento([],_).
segmento(X,X).

segmento([X|XS],[G|GS]):-
    X \= G,
    segmento(X,GS).


    

/*
segmento([X|XS],[G|GS]):-
    member(X,[G|GS]),
    segmento(XS,GS).

*/
