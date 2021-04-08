s --> sn, sv.
sn --> det, n.
sv --> v, sn.
sv --> v.
det --> [o].              det --> [a].
n--> [homem].       n--> [mulher].      n --> [bola].
v--> [chuta].



/*
?- trace.
true.

[trace]  ?- s([a,mulher,chuta,o,homem],[]).
   Call: (10) s([a, mulher, chuta, o, homem], []) ? creep
   Call: (11) sn([a, mulher, chuta, o, homem], _11844) ? creep
   Call: (12) det([a, mulher, chuta, o, homem], _11888) ? creep
   Exit: (12) det([a, mulher, chuta, o, homem], [mulher, chuta, o, homem]) ? creep
   Call: (12) n([mulher, chuta, o, homem], _11976) ? creep
   Exit: (12) n([mulher, chuta, o, homem], [chuta, o, homem]) ? creep
   Exit: (11) sn([a, mulher, chuta, o, homem], [chuta, o, homem]) ? creep
   Call: (11) sv([chuta, o, homem], []) ? creep
   Call: (12) v([chuta, o, homem], _12152) ? creep
   Exit: (12) v([chuta, o, homem], [o, homem]) ? creep
   Call: (12) sn([o, homem], []) ? creep
   Call: (13) det([o, homem], _12284) ? creep
   Exit: (13) det([o, homem], [homem]) ? creep
   Call: (13) n([homem], []) ? creep
   Exit: (13) n([homem], []) ? creep
   Exit: (12) sn([o, homem], []) ? creep
   Exit: (11) sv([chuta, o, homem], []) ? creep
   Exit: (10) s([a, mulher, chuta, o, homem], []) ? creep
true .

[trace]  ?- s([o,homem,chuta,a,mulher],[]).
   Call: (10) s([o, homem, chuta, a, mulher], []) ? creep
   Call: (11) sn([o, homem, chuta, a, mulher], _14300) ? creep
   Call: (12) det([o, homem, chuta, a, mulher], _14344) ? creep
   Exit: (12) det([o, homem, chuta, a, mulher], [homem, chuta, a, mulher]) ? creep
   Call: (12) n([homem, chuta, a, mulher], _14432) ? creep
   Exit: (12) n([homem, chuta, a, mulher], [chuta, a, mulher]) ? creep
   Exit: (11) sn([o, homem, chuta, a, mulher], [chuta, a, mulher]) ? creep
   Call: (11) sv([chuta, a, mulher], []) ? creep
   Call: (12) v([chuta, a, mulher], _14608) ? creep
   Exit: (12) v([chuta, a, mulher], [a, mulher]) ? creep
   Call: (12) sn([a, mulher], []) ? creep
   Call: (13) det([a, mulher], _14740) ? creep
   Exit: (13) det([a, mulher], [mulher]) ? creep
   Call: (13) n([mulher], []) ? creep
   Exit: (13) n([mulher], []) ? creep
   Exit: (12) sn([a, mulher], []) ? creep
   Exit: (11) sv([chuta, a, mulher], []) ? creep
   Exit: (10) s([o, homem, chuta, a, mulher], []) ? creep
true .

[trace]  ?- s([o,homem,chuta,a,bola],[]).
   Call: (10) s([o, homem, chuta, a, bola], []) ? creep
   Call: (11) sn([o, homem, chuta, a, bola], _16756) ? creep
   Call: (12) det([o, homem, chuta, a, bola], _16800) ? creep
   Exit: (12) det([o, homem, chuta, a, bola], [homem, chuta, a, bola]) ? creep
   Call: (12) n([homem, chuta, a, bola], _16888) ? creep
   Exit: (12) n([homem, chuta, a, bola], [chuta, a, bola]) ? creep
   Exit: (11) sn([o, homem, chuta, a, bola], [chuta, a, bola]) ? creep
   Call: (11) sv([chuta, a, bola], []) ? creep
   Call: (12) v([chuta, a, bola], _17064) ? creep
   Exit: (12) v([chuta, a, bola], [a, bola]) ? creep
   Call: (12) sn([a, bola], []) ? creep
   Call: (13) det([a, bola], _17196) ? creep
   Exit: (13) det([a, bola], [bola]) ? creep
   Call: (13) n([bola], []) ? creep
   Exit: (13) n([bola], []) ? creep
   Exit: (12) sn([a, bola], []) ? creep
   Exit: (11) sv([chuta, a, bola], []) ? creep
   Exit: (10) s([o, homem, chuta, a, bola], []) ? creep
true .
*/

