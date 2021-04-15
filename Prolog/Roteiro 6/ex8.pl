:- op(300,xfx,h).

2 h 15.
1 h 50.

mult_hora(M,HX h HY,S1 h S2):- 
    S1p is HX *M,
    S2p is HY *M,
    (S2p >= 60 -> S1 is S1p+(S2p // 60) ; S1 is S1p),
    (S2p >= 60 -> S2 is S2p mod 60 ; S2 is S2p).



