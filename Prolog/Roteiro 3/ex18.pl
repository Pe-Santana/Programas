remove(X,[X|XS],XS).

remove(X,[Y|YS],[Y|G]):-
    remove(X,YS,G).


permutacao([],[]).
permutacao(Xs,[Y|Zs]):-
    remove(Y,Xs,Ys),
    permutacao(Ys,Zs).

/*
a)

?- permutacao([a,m,o,r],X).
X = [a, m, o, r] ;
X = [a, m, r, o] ;
X = [a, o, m, r] ;
X = [a, o, r, m] ;
X = [a, r, m, o] ;
X = [a, r, o, m] ;
X = [m, a, o, r] ;
X = [m, a, r, o] ;
X = [m, o, a, r] ;
X = [m, o, r, a] ;
X = [m, r, a, o] ;
X = [m, r, o, a] ;
X = [o, a, m, r] ;
X = [o, a, r, m] ;
X = [o, m, a, r] ;
X = [o, m, r, a] ;
X = [o, r, a, m] ;
X = [o, r, m, a] ;
X = [r, a, m, o] ;
X = [r, a, o, m] ;
X = [r, m, a, o] ;
X = [r, m, o, a] ;
X = [r, o, a, m] ;
X = [r, o, m, a] ;
false.

b)

?- permutacao([carlos, rose, sergio, adriano, fabiola],X).
X = [carlos, rose, sergio, adriano, fabiola]
X = [carlos, rose, sergio, fabiola, adriano]
X = [carlos, rose, adriano, sergio, fabiola]
X = [carlos, rose, adriano, fabiola, sergio]
X = [carlos, rose, fabiola, sergio, adriano]
X = [carlos, rose, fabiola, adriano, sergio]
X = [carlos, sergio, rose, adriano, fabiola]
X = [carlos, sergio, rose, fabiola, adriano]
X = [carlos, sergio, adriano, rose, fabiola]
X = [carlos, sergio, adriano, fabiola, rose]
X = [carlos, sergio, fabiola, rose, adriano]
X = [carlos, sergio, fabiola, adriano, rose]
X = [carlos, adriano, rose, sergio, fabiola]
X = [carlos, adriano, rose, fabiola, sergio]
X = [carlos, adriano, sergio, rose, fabiola]
X = [carlos, adriano, sergio, fabiola, rose]
X = [carlos, adriano, fabiola, rose, sergio]
X = [carlos, adriano, fabiola, sergio, rose]
X = [carlos, fabiola, rose, sergio, adriano]
X = [carlos, fabiola, rose, adriano, sergio]
X = [carlos, fabiola, sergio, rose, adriano]
X = [carlos, fabiola, sergio, adriano, rose]
X = [carlos, fabiola, adriano, rose, sergio]
X = [carlos, fabiola, adriano, sergio, rose]
X = [rose, carlos, sergio, adriano, fabiola]
X = [rose, carlos, sergio, fabiola, adriano]
X = [rose, carlos, adriano, sergio, fabiola]
X = [rose, carlos, adriano, fabiola, sergio]
X = [rose, carlos, fabiola, sergio, adriano]
X = [rose, carlos, fabiola, adriano, sergio]
X = [rose, sergio, carlos, adriano, fabiola]
X = [rose, sergio, carlos, fabiola, adriano]
X = [rose, sergio, adriano, carlos, fabiola]
X = [rose, sergio, adriano, fabiola, carlos]
X = [rose, sergio, fabiola, carlos, adriano]
X = [rose, sergio, fabiola, adriano, carlos]
X = [rose, adriano, carlos, sergio, fabiola]
X = [rose, adriano, carlos, fabiola, sergio]
X = [rose, adriano, sergio, carlos, fabiola]
X = [rose, adriano, sergio, fabiola, carlos]
X = [rose, adriano, fabiola, carlos, sergio]
X = [rose, adriano, fabiola, sergio, carlos]
X = [rose, fabiola, carlos, sergio, adriano]
X = [rose, fabiola, carlos, adriano, sergio]
X = [rose, fabiola, sergio, carlos, adriano]
X = [rose, fabiola, sergio, adriano, carlos]
X = [rose, fabiola, adriano, carlos, sergio]
X = [rose, fabiola, adriano, sergio, carlos]
X = [sergio, carlos, rose, adriano, fabiola]
X = [sergio, carlos, rose, fabiola, adriano]
X = [sergio, carlos, adriano, rose, fabiola]
X = [sergio, carlos, adriano, fabiola, rose]
X = [sergio, carlos, fabiola, rose, adriano]
X = [sergio, carlos, fabiola, adriano, rose]
X = [sergio, rose, carlos, adriano, fabiola]
X = [sergio, rose, carlos, fabiola, adriano]
X = [sergio, rose, adriano, carlos, fabiola]
X = [sergio, rose, adriano, fabiola, carlos]
X = [sergio, rose, fabiola, carlos, adriano]
X = [sergio, rose, fabiola, adriano, carlos]
X = [sergio, adriano, carlos, rose, fabiola]
X = [sergio, adriano, carlos, fabiola, rose]
X = [sergio, adriano, rose, carlos, fabiola]
X = [sergio, adriano, rose, fabiola, carlos]
X = [sergio, adriano, fabiola, carlos, rose]
X = [sergio, adriano, fabiola, rose, carlos]
X = [sergio, fabiola, carlos, rose, adriano]
X = [sergio, fabiola, carlos, adriano, rose]
X = [sergio, fabiola, rose, carlos, adriano]
X = [sergio, fabiola, rose, adriano, carlos]
X = [sergio, fabiola, adriano, carlos, rose]
X = [sergio, fabiola, adriano, rose, carlos]
X = [adriano, carlos, rose, sergio, fabiola]
X = [adriano, carlos, rose, fabiola, sergio]
X = [adriano, carlos, sergio, rose, fabiola]
X = [adriano, carlos, sergio, fabiola, rose]
X = [adriano, carlos, fabiola, rose, sergio]
X = [adriano, carlos, fabiola, sergio, rose]
X = [adriano, rose, carlos, sergio, fabiola]
X = [adriano, rose, carlos, fabiola, sergio]
X = [adriano, rose, sergio, carlos, fabiola]
X = [adriano, rose, sergio, fabiola, carlos]
X = [adriano, rose, fabiola, carlos, sergio]
X = [adriano, rose, fabiola, sergio, carlos]
X = [adriano, sergio, carlos, rose, fabiola]
X = [adriano, sergio, carlos, fabiola, rose]
X = [adriano, sergio, rose, carlos, fabiola]
X = [adriano, sergio, rose, fabiola, carlos]
X = [adriano, sergio, fabiola, carlos, rose]
X = [adriano, sergio, fabiola, rose, carlos]
X = [adriano, fabiola, carlos, rose, sergio]
X = [adriano, fabiola, carlos, sergio, rose]
X = [adriano, fabiola, rose, carlos, sergio]
X = [adriano, fabiola, rose, sergio, carlos]
X = [adriano, fabiola, sergio, carlos, rose]
X = [adriano, fabiola, sergio, rose, carlos]
X = [fabiola, carlos, rose, sergio, adriano]
X = [fabiola, carlos, rose, adriano, sergio]
X = [fabiola, carlos, sergio, rose, adriano]
X = [fabiola, carlos, sergio, adriano, rose]
X = [fabiola, carlos, adriano, rose, sergio]
X = [fabiola, carlos, adriano, sergio, rose]
X = [fabiola, rose, carlos, sergio, adriano]
X = [fabiola, rose, carlos, adriano, sergio]
X = [fabiola, rose, sergio, carlos, adriano]
X = [fabiola, rose, sergio, adriano, carlos]
X = [fabiola, rose, adriano, carlos, sergio]
X = [fabiola, rose, adriano, sergio, carlos]
X = [fabiola, sergio, carlos, rose, adriano]
X = [fabiola, sergio, carlos, adriano, rose]
X = [fabiola, sergio, rose, carlos, adriano]
X = [fabiola, sergio, rose, adriano, carlos]
X = [fabiola, sergio, adriano, carlos, rose]
X = [fabiola, sergio, adriano, rose, carlos]
X = [fabiola, adriano, carlos, rose, sergio]
X = [fabiola, adriano, carlos, sergio, rose]
X = [fabiola, adriano, rose, carlos, sergio]
X = [fabiola, adriano, rose, sergio, carlos]
X = [fabiola, adriano, sergio, carlos, rose]
X = [fabiola, adriano, sergio, rose, carlos]
*/
