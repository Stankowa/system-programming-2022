#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>


int main()
{
                   //EXERCICE 1:
    //1. le processus de pid 1 est le processus init

        //2. Ecrire un programme qui passe le temps a attendre
    //cas 1 avec la boucle infini
//    int a  = 2;
//    while (a == 2){
//        wait();
//    }
    //cas 2 avec l'attente d'un processus deja mort
//        pid_t pid_fils = fork();
//        int val = 1;
//        if (pid_fils == -1){
//            exit(EXIT_FAILURE);
//        }
//        if (pid_fils == 0){
//            write(STDOUT_FILENO, "Je suis le fils ", 16);
//            int val = 3;
//            exit(val);
//        }
//        else {
//            wait();
//            while(val != 3){
//                sleep(1);
//            }
//            write(STDOUT_FILENO, "je suis le pere ", 15);
//
//       }

    // je constate que lorsque le programme ne se termine pas il reste actif dans la liste des processus avec le statut SS
//3. Le programme a modifier n'a pas été donné
//4. Le programme a modifier n'a pas été donné
        //EXERCICE 2:
// ecrire un programme qui calcul le factoriel d'un nombre entrer
//    int i, fact = 1;
//    char result[100];
//    write(STDOUT_FILENO, "Ecrire un nombre: ", 19);
//    int tampon[50];
//    int nb = read(STDIN_FILENO, tampon, 100);
//    int c = atoi(tampon);
//
//    if (c==0){
//        write(STDOUT_FILENO, "factorielle est ", 17);
//        write(STDOUT_FILENO, "1", 1);
//    }
//    else{
//        for(i=1; i<c+1;i++){
//            fact = fact*i;
//        }
//        write(STDOUT_FILENO, "factorielle est ", 17);
//        sprintf(result,"%d",fact);
//        write(STDOUT_FILENO, result, 2);
//    }

            // EXERCICE 3
//creer un programme de course
    int alfa[100];
    char numero, nom;
    int n, i=1;
    write(STDOUT_FILENO, "nombre d'equipe ", 16);
    int nb = read(STDIN_FILENO, alfa,3);
    n = atoi(alfa);
    write(STDOUT_FILENO,alfa,3);
    while (i< n){
        printf("%d",i);
        sprintf(numero,"%d",i);
        nom = "equipe"+numero;
        printf("%c",nom);
    }
}
