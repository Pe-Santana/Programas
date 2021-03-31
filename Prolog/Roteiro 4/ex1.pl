soma_acum([],[]).
soma_acum([_],[_]).
soma_acum([X|[X1,XS]],[Y|[Y1,YS]]):-  
    Y is X,
    Y1 is X1+Y,
    soma_acum(X1|XS,Y1|YS).
     
    