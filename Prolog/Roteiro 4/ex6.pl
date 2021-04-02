bissexto(A):-
    X is A mod 100,
    X =\= 0,
    0 is A mod 4;
    0 is A mod 400.