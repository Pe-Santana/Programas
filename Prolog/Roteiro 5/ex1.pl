s(C):- sn(A), sv(B), append(A,B,C).
sn(C):- det(A), n(B), append(A,B,C).
sv(C):- v(A), sn(B), append(A,B,C).
sv(C):- v(C).
det([o]). det([a]).
n([homem]). n([mulher]). n([bola]).
v([chuta]).

/*
 Call: (10) s([a, mulher, chuta, o, homem]) ? creep
   Call: (11) sn(_11838) ? creep
   Call: (12) det(_11882) ? creep
   Exit: (12) det([o]) ? creep
   Call: (12) n(_11976) ? creep
   Exit: (12) n([homem]) ? creep
   Call: (12) lists:append([o], [homem], _13088) ? creep
   Exit: (12) lists:append([o], [homem], [o, homem]) ? creep
   Exit: (11) sn([o, homem]) ? creep
   Call: (11) sv(_13222) ? creep
   Call: (12) v(_13266) ? creep
   Exit: (12) v([chuta]) ? creep
   Call: (12) sn(_13360) ? creep
   Call: (13) det(_13404) ? creep
   Exit: (13) det([o]) ? creep
   Call: (13) n(_13498) ? creep
   Exit: (13) n([homem]) ? creep
   Call: (13) lists:append([o], [homem], _13596) ? creep
   Exit: (13) lists:append([o], [homem], [o, homem]) ? creep
   Exit: (12) sn([o, homem]) ? creep
   Call: (12) lists:append([chuta], [o, homem], _13734) ? creep
   Exit: (12) lists:append([chuta], [o, homem], [chuta, o, homem]) ? creep
   Exit: (11) sv([chuta, o, homem]) ? creep
   Call: (11) lists:append([o, homem], [chuta, o, homem], [a, mulher, chuta, o, homem]) ? creep
   Fail: (11) lists:append([o, homem], [chuta, o, homem], [a, mulher, chuta, o, homem]) ? creep
   Redo: (13) n(_13956) ? creep
   Exit: (13) n([mulher]) ? creep
   Call: (13) lists:append([o], [mulher], _14054) ? creep
   Exit: (13) lists:append([o], [mulher], [o, mulher]) ? creep
   Exit: (12) sn([o, mulher]) ? creep
   Call: (12) lists:append([chuta], [o, mulher], _14192) ? creep
   Exit: (12) lists:append([chuta], [o, mulher], [chuta, o, mulher]) ? creep
   Exit: (11) sv([chuta, o, mulher]) ? creep
   Call: (11) lists:append([o, homem], [chuta, o, mulher], [a, mulher, chuta, o, homem]) ? creep
   Fail: (11) lists:append([o, homem], [chuta, o, mulher], [a, mulher, chuta, o, homem]) ? creep
   Redo: (13) n(_14414) ? creep
   Exit: (13) n([bola]) ? creep
   Call: (13) lists:append([o], [bola], _14512) ? creep
   Exit: (13) lists:append([o], [bola], [o, bola]) ? creep
   Exit: (12) sn([o, bola]) ? creep
   Call: (12) lists:append([chuta], [o, bola], _14650) ? creep
   Exit: (12) lists:append([chuta], [o, bola], [chuta, o, bola]) ? creep
   Exit: (11) sv([chuta, o, bola]) ? creep
   Call: (11) lists:append([o, homem], [chuta, o, bola], [a, mulher, chuta, o, homem]) ? creep
   Fail: (11) lists:append([o, homem], [chuta, o, bola], [a, mulher, chuta, o, homem]) ? creep
   Redo: (13) det(_14872) ? creep
   Exit: (13) det([a]) ? creep
   Call: (13) n(_14966) ? creep
   Exit: (13) n([homem]) ? creep
   Call: (13) lists:append([a], [homem], _15064) ? creep
   Exit: (13) lists:append([a], [homem], [a, homem]) ? creep
   Exit: (12) sn([a, homem]) ? creep
   Call: (12) lists:append([chuta], [a, homem], _15202) ? creep
   Exit: (12) lists:append([chuta], [a, homem], [chuta, a, homem]) ? creep
   Exit: (11) sv([chuta, a, homem]) ? creep
   Call: (11) lists:append([o, homem], [chuta, a, homem], [a, mulher, chuta, o, homem]) ? creep
   Fail: (11) lists:append([o, homem], [chuta, a, homem], [a, mulher, chuta, o, homem]) ? creep
   Redo: (13) n(_15424) ? creep
   Exit: (13) n([mulher]) ? creep

    ...
    */
    