minAcum([H|T],A,X):- 
    H < A,
    minAcum(T,H,X).

minAcum([H|T],A,X):- 
    H >= A,
    minAcum(T,A,X).

minAcum([],A,A).