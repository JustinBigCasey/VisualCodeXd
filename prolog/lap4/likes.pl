indian(curry).
indian(dahl).
indian(tandoori).
indian(kurma).

chinese(chow_mein).
chinese(chop_suey).
chinese(sweet_and_sour).

italian(pizza).
italian(spaghetti).

english(roast_beef).

mild(dahl).
mild(kurma).
mild(chow_mein).
mild(pizza).

medium(curry).
medium(chop_suey).
medium(sweet_and_sour).

hot(tandoori).

likes(sam, Food) :-
    indian(Food),
    mild(Food).
likes(sam, Food) :-
    chinese(Food).
likes(sam, Food) :-
    italian(Food).
likes(sam, chips).