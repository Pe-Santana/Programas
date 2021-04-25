/*
?- assert(q(a,b)), assertz(q(1,2)),  asserta(q(foo ,blug )).

a base de dados é composta por :

q(foo,blug).
q(a,b).
q(1,2).

?- retract(q(1,2)),  assertz( (p(X) :-   h(X)) ).

a base de dados é composta por :

p(X) :- h(X).

q(foo,blug).
q(a,b).

?- retract(q(_,_)),fail.

a base de dados é composta por :

p(X) :- h(X).


*/