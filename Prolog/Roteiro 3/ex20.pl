combinacao(0,_,[]).

combinacao(N,[X|Xs],[X|Ys]):-
    N>0,
    N1 is N-1,
    combinacao(N1,Xs,Ys).

combinacao(N,[_|Xs], Ys):- 
    N>0,
    combinacao(N,Xs,Ys).

comite([],[],[]).

comite(X,Y,G):-
    combinacao(3,X,X1),
    combinacao(4,Y,Y1),
    append(X1,Y1,G).

/*
a)

-? combinacao(5, [a1,a2,a3,a4,a5,a6,a7,a8,a9,a10], C).
C = [a1, a2, a3, a4, a5]
C = [a1, a2, a3, a4, a6]
C = [a1, a2, a3, a4, a7]
C = [a1, a2, a3, a4, a8]
C = [a1, a2, a3, a4, a9]
C = [a1, a2, a3, a4, a10]
C = [a1, a2, a3, a5, a6]
C = [a1, a2, a3, a5, a7]
C = [a1, a2, a3, a5, a8]
C = [a1, a2, a3, a5, a9]
C = [a1, a2, a3, a5, a10]
C = [a1, a2, a3, a6, a7]
C = [a1, a2, a3, a6, a8]
C = [a1, a2, a3, a6, a9]
C = [a1, a2, a3, a6, a10]
C = [a1, a2, a3, a7, a8]
C = [a1, a2, a3, a7, a9]
C = [a1, a2, a3, a7, a10]
C = [a1, a2, a3, a8, a9]
C = [a1, a2, a3, a8, a10]
C = [a1, a2, a3, a9, a10]
C = [a1, a2, a4, a5, a6]
C = [a1, a2, a4, a5, a7]
C = [a1, a2, a4, a5, a8]
...

b)

?- comite([a1,a2,a3,a4,a5,a6,a7,a8,a9],[b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11], C).
C = [a1, a2, a3, b1, b2, b3, b4]
C = [a1, a2, a3, b1, b2, b3, b5]
C = [a1, a2, a3, b1, b2, b3, b6]
C = [a1, a2, a3, b1, b2, b3, b7]
C = [a1, a2, a3, b1, b2, b3, b8]
C = [a1, a2, a3, b1, b2, b3, b9]
C = [a1, a2, a3, b1, b2, b3, b10]
C = [a1, a2, a3, b1, b2, b3, b11]
C = [a1, a2, a3, b1, b2, b4, b5]
C = [a1, a2, a3, b1, b2, b4, b6]
C = [a1, a2, a3, b1, b2, b4, b7]
C = [a1, a2, a3, b1, b2, b4, b8]
C = [a1, a2, a3, b1, b2, b4, b9]
C = [a1, a2, a3, b1, b2, b4, b10]
C = [a1, a2, a3, b1, b2, b4, b11]
C = [a1, a2, a3, b1, b2, b5, b6]
C = [a1, a2, a3, b1, b2, b5, b7]
C = [a1, a2, a3, b1, b2, b5, b8]
C = [a1, a2, a3, b1, b2, b5, b9]
C = [a1, a2, a3, b1, b2, b5, b10]
C = [a1, a2, a3, b1, b2, b5, b11]
C = [a1, a2, a3, b1, b2, b6, b7]
...
*/
