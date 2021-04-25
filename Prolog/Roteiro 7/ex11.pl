:-dynamic res_somatorio/2.

somatorio(X, S):-
    res_somatorio(X, S), !.

somatorio(X,S):- 
    somatorio(X,0,S).

somatorio(0,S,S).     
somatorio(X,Y,S):-     
    X>0,         
    Y1 is Y+X,     
    X1 is X-1,     
    somatorio(X1,Y1,S),
    assert(res_somatorio(X, S)).