A faire:
* Rerererereverifier la norme + la pressence de fichiers binaires/.o sur le depot
* Repush en enlevant ce fichier
* jouer avec le dictionnaire
* trouver une autre langue similaire a l'anglais pour ce qui est de la structure
	des nombres(francais et allemand non recommandes, chinois c'est facile)
* essayer de faire en sorte de lire l'entree standard si on a pas d'argument
	(si on le fait pas c'est pas grave)
* Verifier qu'il n'y a pas de nouveau probleme avec le atoa? de Marie
* Ajouter la fonction cleanmem

DONE :
* Enlever tous les #include <stdio.h> et recompiler pour verifier que ca compile sans
* tester les cas d'erreurs courants: trop ou pas assez d'arguments, chaines vides
	KO —> 0 et 0000 NE RENVOIENT RIEN
	FIXED - KO —> Pas d’arg
	OK —> 2 args
	OK —> Chaine vide
	OK —> “1 234” “1,234”, “1,234,567”, “1 234,567” (Err), “897 112 332 234 567 864"
	FIXED - KO —> “01234567” (one two hundred thirty four thousand five hundred sixty seven)
	KO —> nb > undecillion


Changements par rapport a ton algo de tri:
*Je l'ai fait trier d'abord par longeur de chaine de caractere puis par table
ascii, sinon ca me mettait 200 avant 3

Je pars de l'ecole a 7h du mat, je pense pas revenir avant 16h.
PS: Il vaut mieux assurer un 100 que de tenter un 125, le rater et se retrouver a 0
