/*
s --> foo,bar,wiggle.
foo --> [chu].
foo --> foo,foo.
bar --> mar,zar.
mar --> me,my.
me --> [eu].
my --> [sou].
zar --> blar,car.
blar --> [um].
car --> [trem].
wiggle --> [tchu].
wiggle --> wiggle,wiggle.
*/

wiggle(tchu).
car(trem).
blar(um).
my(sou).
me(eu).
foo(chu).

wiggle(wiggle,wiggle).
zar(blar,car).
mar(me,my).
foo(foo,foo).
bar(mar,zar).
/*
X is mar(me(X1),my(X2)),
    Y is zar(blar(Y1),car(Y2)).
*/
