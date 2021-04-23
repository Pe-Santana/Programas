/*
sem corte:

max(X,Y,Y):- X =< Y.
max(X,Y,X):- X>Y. 

[trace]  ?- max(200,300,G).
   Call: (10) max(200, 300, _9382) ? creep
   Call: (11) 200=<300 ? creep
   Exit: (11) 200=<300 ? creep
   Exit: (10) max(200, 300, 300) ? creep
G = 300 ;
   Redo: (10) max(200, 300, _9382) ? creep
   Call: (11) 200>300 ? creep
   Fail: (11) 200>300 ? creep
   Fail: (10) max(200, 300, _9382) ? creep
false.

*/

/*

corte verde:

max(X,Y,Y):- X =< Y, !.
max(X,Y,X). 

[trace]  ?- max(200,300,G).
   Call: (10) max(200, 300, _12142) ? creep
   Call: (11) 200=<300 ? creep
   Exit: (11) 200=<300 ? creep
   Exit: (10) max(200, 300, 300) ? creep
G = 300.

*/

/*

corte vermelho:

max(X,Y,Z):- X =< Y, !, Y=Z.
max(X,Y,X). 

[trace]  ?- max(200,300,G).
   Call: (10) max(200, 300, _12142) ? creep
   Call: (11) 200=<300 ? creep
   Exit: (11) 200=<300 ? creep
   Call: (11) 300=_12142 ? creep
   Exit: (11) 300=300 ? creep
   Exit: (10) max(200, 300, 300) ? creep
G = 300.

*/