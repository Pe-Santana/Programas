triplas([X,Y,Z]):-
    X \== Y,
    Y \== Z,
    T is X/Z,
    T1 is ((10* X) + Y)/((10* Y) + Z),
    T =:= T1.