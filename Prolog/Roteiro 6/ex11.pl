:- op(300,xfx,h).

 X h Y :- number(X),number(Y).



soma_hora(H1X h H1Y,H2X h H2Y,S1 h S2):- 
    S1p is H1X +H2X,
    S2p is H1Y +H2Y,
    (S2p >= 60 -> S1 is S1p+(S2p // 60) ; S1 is S1p),
    (S2p >= 60 -> S2 is S2p mod 60 ; S2 is S2p).


mult_hora(M,HX h HY,S1 h S2):- 
    S1p is HX *M,
    S2p is HY *M,
    (S2p >= 60 -> S1 is S1p+(S2p // 60) ; S1 is S1p),
    (S2p >= 60 -> S2 is S2p mod 60 ; S2 is S2p).


:- op(510,yfx,++).

:- op(410,yfx,**).

:- op(710,xfy,<-).

H <- X ++ Y :- soma_hora(X,Y,H).
H <- X ** Y :- mult_hora(X,Y,H).
H <- X1 ** X2 ++ Y1 ** Y2 :- 
    mult_hora(X1,X2,H1),
    mult_hora(Y1,Y2,H2),
    soma_hora(H1,H2,H).

H <- X1 ** X2 ++  Y2 :- 
    mult_hora(X1,X2,H1),
    soma_hora(H1,Y2,H).
H <- X1  ++ Y1 ** Y2 :- 
    mult_hora(Y1,Y2,H2),
    soma_hora(X1,H2,H).

