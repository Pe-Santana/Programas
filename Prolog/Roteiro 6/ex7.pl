:- op(300,xfx,h).

2 h 15.
1 h 50.

soma_hora(H1X h H1Y,H2X h H2Y,S1 h S2):- 
    S1p is H1X +H2X,
    S2p is H1Y +H2Y,
    (S2p >= 60 -> S1 is S1p+(S2p // 60) ; S1 is S1p),
    (S2p >= 60 -> S2 is S2p mod 60 ; S2 is S2p).


