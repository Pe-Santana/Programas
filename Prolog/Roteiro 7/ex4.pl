unificavel([],_,[]).
unificavel([X|XS],Y,G):-
\+ X=Y, !,
unificavel(XS,Y,G).
unificavel([X|XS],Y,[X|G]):- unificavel(XS,Y,G). 