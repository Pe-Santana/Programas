/*
divide([], [], []).
divide([X|XS], [X|G], S):-
    X >= 0,
    divide(XS, G, S).

divide([X|XS], G, [X|S]):-
    X < 0,
    divide(XS, G, S).
*/

divide([], [], []).
divide([X|XS], [X|G], S):-
    X >= 0,
    divide(XS, G, S),!.

divide([X|XS], G, [X|S]):-
    X < 0,
    divide(XS, G, S).