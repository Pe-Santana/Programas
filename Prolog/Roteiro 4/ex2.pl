soma_ate(0,0).
soma_ate(N,S):-
    M is N - 1,
    soma_ate(M,Acum),
    S is Acum+N.