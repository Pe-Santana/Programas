%a)Check

disjunto([],_).

disjunto([X|XS],Y):-
    \+ member(X,Y),
    disjunto(XS,Y).


%b)Check

uniao([],[],[]).


uniao([H,H1|T],[G,G1|T1],[H,H1,G,G1|V]):-
    uniao(T,T1,V1),
    permutation(V1,V).

uniao([H|T],[G|T1],[H,G|V]):-
    uniao(T,T1,V1).
    permutation(V1,V).

%c)Check

intersecao([],_,[]).

intersecao([X|XS],Y,G):-
    member(X,Y),
    G = [X|G1],
    intersecao(XS,Y,G1).

intersecao([_|XS],Y,G):-
    intersecao(XS,Y,G).



%d)Check

diferenca([],_,[]).


diferenca([X|XS],Y,[G|GS]):-
    \+ member(X,Y),
    G is X,
    diferenca(XS,Y,GS).
diferenca([X|XS],Y,G):-
    member(X,Y),
    diferenca(XS,Y,G).

