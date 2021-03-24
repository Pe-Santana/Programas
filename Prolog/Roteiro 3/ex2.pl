intercala1([],Y,Y).
intercala1(X,[],X).
intercala1([],[],_).

intercala1([X|XS],[Y|YS],[L,LS|LN]) :-
    L = X,
    LS = Y,
    intercala1(XS,YS,LN).	