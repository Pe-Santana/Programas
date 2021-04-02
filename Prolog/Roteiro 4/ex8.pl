%a)Check

disjunto([],_).

disjunto([X|XS],Y):-
    \+ member(X,Y),
    disjunto(XS,Y).


%b)Check

uniao([],[],[]).


uniao([H,H1|T],[G,G1|T1],[H,H1,G,G1|V]):-
    
    uniao(T,T1,V).

uniao([H|T],[G|T1],[H,G|V]):-
    
    uniao(T,T1,V).

%c)Check

intersecao([],_,[]).

intersecao([X|XS],Y,G):-
    member(X,Y),
    G = [X|G1],
    intersecao(XS,Y,G1).

intersecao([_|XS],Y,G):-
    intersecao(XS,Y,G).



%d)

diferenca([],_,[]).

diferenca([X|XS],[X|YS],G):-
   diferenca(XS,YS,G).

diferenca([X|XS],[_|YS],[X|T]):-
    diferenca(XS,YS,T).

diferenca([X|_],[_|YS],[X|T]):-
    diferenca(X,YS,T).