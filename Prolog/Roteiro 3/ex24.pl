fatorial(0,1).

fatorial(M,N):-
    M>0,
    G is M-1,
    fatorial(G,NS),
    N is M*NS.


narranjos(M,P,N):-
    fatorial(M,G),
        I is M-P,
    fatorial(I,I1),
    N is G/I1.