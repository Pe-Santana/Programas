deCarro(auckland,hamilton).
deCarro(hamilton,raglan).
deCarro(valmont,saarbruecken).
deCarro(valmont,metz).
deTrem(metz,frankfurt).
deTrem(saarbruecken,frankfurt).
deTrem(metz,paris).
deTrem(saarbruecken,paris).
deAviao(frankfurt,bangkok).
deAviao(frankfurt,singapore).
deAviao(paris,losAngeles).
deAviao(bangkok,auckland).
deAviao(losAngeles,auckland).

viagem(X,Y,vai(X,deCarro,Y)) :- 
    deCarro(X,Y).
viagem(X,Y,vai(X,deTrem,Y)) :- 
    deTrem(X,Y).
viagem(X,Y,vai(X,deAviao,Y)) :-
    deAviao(X,Y).
viagem(X,Y,vai(X,deCarro,Z,W)) :-
    deCarro(X,Z), 
    viagem(Z,Y,W).
viagem(X,Y,vai(X,deTrem,Z,W)) :-
    deTrem(X,Z), 
    viagem(Z,Y,W).
viagem(X,Y,vai(X,deAviao,Z,W)) :-
    deAviao(X,Z), 
    viagem(Z,Y,W).
