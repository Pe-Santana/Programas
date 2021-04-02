segmento([],[]).
segmento([],_).

segmento([X|XS],[X|GS]):-
    segmento(XS,GS).

segmento(X,[_|GS]):-
    segmento(X,GS).

    

/*
segmento([X|XS],[G|GS]):-
    member(X,[G|GS]),
    segmento(XS,GS).

*/
