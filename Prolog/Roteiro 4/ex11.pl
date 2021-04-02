fatores_primos(X, F):-
    fidall(D, fatPS(X, D), F).

fatPS(X, D):-
    fatP(X, 2, D).

fatP(X, D, D):-
    0 is X mod D.
fatP(X, D, G):-
    D < X,
    (0 is X mod D
    -> (X1 is X/D, fatP(X1, D, G));  
    (D1 is D + 1, fatP(X, D1, G))).