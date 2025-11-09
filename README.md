# Geometry_2D
Systeme de geaometrie 2d

ajout du dossier complet
Il est question pour nous creer un systeme de geometri 2D pour manipuler des points, vecteurs, structures et effectuer des operations.
la stucture du projet est la suivante:
on retrouve la structure prinipale "main.cpp" qui nous permet tester notre travail (compiler et executer).
Puis on creer un dossier Geometry, dans le quel on retrouve les fichiers:
-Point.h: permet de definir le type Point2f et les fonctios en relation.
-Point.cpp: implementation des fontions Point2f.
-Vector.h: defini un type Vector2f et les operations qui vont avec.
Vector.cpp: impletation des structures d'operations ( add, sub , translate, lerp, scale, dot, determinant, normalize, makeV2f).
_-Utils.h: permet d'afficher et convertir les textes.
Utils.cpp: implementation des fonctions d'affichage et de convertion de texte.

Petite presision:
POINT(point.h)
*Makep2f (x, y): permet de creer un point
*Translate (p, dx, dy): deplace le point
*Rotate(p, angle): permet la rotation du point
*Tostring(p): affiche le point

VECTEURS ( vector.h)

*MakeV2f(x, y): permet de creer un vecteur
*Add, sub, scale: represente les operations de base

* Length, Normalize: prend en charge le calcul e la longueur et de la direction
* Lerp, Dot, Determinant: prennent en charge les operations avance a savoir: (produit scaler entre deux vecteur ( Dot), geterminant entre deux vecteur ( Dertaminant), point intermediaireentre deux fonctions ( Lerp).

 UTILS.H
fonction perettant de la conversion de texte et affiche le resultat.
