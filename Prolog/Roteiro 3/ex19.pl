npermutacao(0,1).

npermutacao(M,N):-
    M>0,
    G is M-1,
    npermutacao(G,NS),
    N is M*NS.
    