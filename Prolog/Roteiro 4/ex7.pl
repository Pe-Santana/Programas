romano(N, ['M'|GS]):-
    N >= 1000,
    X is N-1000,
    romano(X, GS).

romano(N, ['CM'|GS]):-
    N >= 900,
    X is N-900,
    romano(X, GS).

romano(N, ['D'|GS]):-
    N >= 500,
    X is N-500,
    romano(X, GS).

romano(N, ['CD'|GS]):-
    N >= 400,
    X is N-400,
    romano(X, GS).

romano(N, ['C'|GS]) :-
    N >= 100,
    X is N-100,
    romano(X, GS).

romano(N, ['L'|GS]):-
    N >= 50,
    X is N-50,
    romano(X, GS).

romano(N, ['XL'|GS]):-
    N >= 40,
    X is N-40,
    romano(X, GS).

romano(N, ['X'|GS]):-
    N > 9,
    X is N-10,
    romano(X, GS).

romano(N, ['IX'|_]):-
    N = 9.

romano(N, ['V'|GS]):-
    N > 4,
    X is N-5,
    romano(X, GS).

romano(N, ['IV'|_]):-
    N = 4.

romano(N, ['I'|GS]):-
    N >= 1,
    X is N-1,
    romano(X, GS).

romano(N, []):-
    N = 0.
