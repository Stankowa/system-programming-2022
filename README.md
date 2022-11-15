# Cours de programmation système
### Travail à faire :
- Vous allez tout d'abord cloner le *repository* dans votre machine.
- Vous allez ensuite créer un projet sur Code block. Le nom du projet doit comporter votre nom suivi de la mension *tp-1*
- Vous allez suivre le document qui est dans le dossier et vous aller coder dans des fichiers .c les différentes étapes et devoirs qui sont dans le TP. Tous ces fichiers doivent être présent dans le projet Code Block créé précédemment. 
- Une fois terminé, vous déver ajouter un rapport complet du TP sous le format PDF. Vous pourrez y renseigner les erreur rencontrées.
- Vous devez ensuite ajouter votre projet comme un module de ce repository.
- Pour cela, suivre les étapes suivantes: 
    - git init
    - git add .
    - git commit -m "First commit"
    - git push origin main

### Délais
Vous avez 04 heures pour finir ce TP. les TPs vont être pris en compte dans la note de CC. Les devoir en retard ne seront pas acceptés

### Exercice 1 [Rappel d’UNIX : gestion des processus]
Se familiariser avec les différentes options de la commande ps en lisant man ps.
1. Quel est le processus de pid 1 ?
2. Ecrivez un programme qui passe le temps à attendre. Ouvrer une autre invite de commande et taper la commande ps aux. Que constatez-vous ?
3. Lancer le programme ci-dessous avec les arguments 10 20. Tapez ps-la dans un autre terminal avant la fin du père, avant la fin du fils. Quels sont les ppid du pere et du fils ? Donnez une explication.
4. Lancer le programme ci-dessous avec les arguments 10 0. Tapez ps-la dans un autre terminal avant la fin du père. Que constatez-vous ?

### Exercice 2: Les fonctions write & read
Créer un nouveau projet permettant de prendre un nom en paramètre et d’afficher la factorielle de ce nombre.

### Exercice 3 : La course
- On souhaite faire une course entre plusieurs équipes, chaque équipe étant un processus. Le programme doit prendre en paramètre un nombre d’équipe N et les noms de toutes les équipes. 
- Quand une équipe cours, on affiche le message Le coureur x de l’équipe y est partie. Après l’affichage du message, le coureur attend un nombre de temps aléatoire entre 1 et 4. A son réveil, on incrémente le nombre de tours du coureur. 
- Le programme se termine lorsque chaque coureur a fait Max tour. Max est un nombre passé en paramètre. Le programme affiche la liste des arrivée à la fin du processus main.

