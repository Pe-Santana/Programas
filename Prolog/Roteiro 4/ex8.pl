diferença([],_,[]).
diferença(X,[],X).

diferença([X|XS],[Y|YS],G):-
    