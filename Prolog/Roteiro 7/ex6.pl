pais(alemanha, europa, 83, [franca, belgica, holanda, suica]).
pais(australia, oceania, 25, []).
pais(belgica, europa, 11, [franca, holanda, alemanha]).
pais(espanha, europa, 47, [portugal, franca]).
pais(franca, europa, 67, [espanha, suica,   belgica, alemanha,italia]).
pais(holanda, europa, 17, [belgica, alemanha]).
pais(indonesia, oceania, 268, []).
pais(italia, europa, 60, [franca, suica]).
pais(madagascar, africa, 26, []).
pais(portugal, europa, 10, [espanha]).
pais(suica, europa, 8, [franca, alemanha, italia]).

isolados(P, C):-
    pais(P, C, Pop, F),
    15=<Pop,
    length(F,L),
    L<3.

isolados_grandes(G):-
    findall(C,(isolados(P1,C),isolados(P2,C),P1 \= P2), Lista),
    sort(Lista,G).
