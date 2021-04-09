s --> sn, sv.

sn --> det, n.

suj -->[].
suj --> det,n.

sv --> v, sn.
sv --> v.

obj --> v.
obj --> v,sn.


det --> [Palavra], {lex(Palavra,det)}.

n --> [Palavra], {lex(Palavra,n)}.

v --> [Palavra], {lex(Palavra,v)}.

lex(o, det).
lex(a, det).
lex(mulher, n).
lex(homem, n).
lex(bate, v).