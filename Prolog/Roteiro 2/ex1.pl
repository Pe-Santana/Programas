objeto(mesa).
objeto('A').
objeto('B').

%a)

sobre('A',mesa).
sobre('B','A').

%b)
%P = objeto sobre outro
%Q = objeto acima do outro

% P -> Q

acima_de(X,Z) :- 
    sobre(X,Y),
    sobre(Y,Z).

%c)

%?- acima_de('B',mesa).
%true

