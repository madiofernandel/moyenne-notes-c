 Moyenne Notes C

Le problème : Calculer une moyenne et gérer les notes invalides.  
La solution : Un programme C qui force 5 notes valides sur 20.

   Features
- Validation Stricte : do...while bloque si note < 0 ou > 20.
- Calcul Auto: Somme + Moyenne à %.2f près.
- Résultat : Affiche ADMIS  si >= 10, ECHEC  sinon.

     How to Compile & Run
  bash
gcc gest.c -o moyenne
./moyenne
