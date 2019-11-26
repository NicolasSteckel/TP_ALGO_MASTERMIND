#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define TAILLE 4
#define ESSAI 12

int random (int N) //creation de la fonction qui permettra de choisir un nombre aléatoirement
{
        int value;
        value = rand () % (N) ;
        return value;
}
int Saisie(int b) //creation de la fonction qui permettra de saisir des valeurs
{
        int saisie;
        printf("\n Veuillez entrer une des quatre valeurs \n");
        saisie= scanf("%d",&b);
        return b;
}

int main (void) {
        int n=9,i,c;
        int chiffre1,chiffre2,chiffre3,chiffre4;
        int nbsaisie1,nbsaisie2,nbsaisie3,nbsaisie4;
        srand(time(NULL));


        //On stocke des chiffres entre 0 et 9 dans les variables chiffre
        chiffre1 = random(n);
        chiffre2 = random(n);
        chiffre3 = random(n);
        chiffre4 = random(n);


        //On vérifie qu'il n'y a pas de doublon dans le code pin. Si il y en a, on regenere un des doublons
        if (chiffre1==chiffre2 || chiffre1==chiffre3 || chiffre1==chiffre4){
                    chiffre1 = random(n);

        }
            else if(chiffre2==chiffre3 ||chiffre2==chiffre4){

                    chiffre2 = random(n);

            }
                else if (chiffre3==chiffre4){

                    chiffre4 = random(n);


                }




        printf("   %d %d %d %d \t ",chiffre1,chiffre2,chiffre3,chiffre4);

        for(i=12; i>0; i=i-1){

            //On stocke la saisie utilisateur dans les quatres variables nbsaisie
            nbsaisie1=Saisie(c);
            nbsaisie2=Saisie(c);
            nbsaisie3=Saisie(c);
            nbsaisie4=Saisie(c);



            //verification de la premiere position
            if (nbsaisie1==chiffre1){
                printf("Le chiffre %d est bien en place \n",nbsaisie1);
            }

            if (nbsaisie1==chiffre2){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie1);
            }

            if (nbsaisie1==chiffre3){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie1);
            }

            if (nbsaisie1==chiffre4){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie1);
            }



            //Verification de la deuxieme position
            if (nbsaisie2==chiffre1){
                printf("Le chiffre %d est a la mauvaise place place \n",nbsaisie2);
            }

            if (nbsaisie2==chiffre2){
                printf("Le chiffre %d est bien en place \n",nbsaisie2);
            }

            if (nbsaisie2==chiffre3){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie2);
            }

            if (nbsaisie2==chiffre4){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie2);
            }



            //Verification de la troisieme position
            if (nbsaisie3==chiffre1){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie3);
            }

            if (nbsaisie3==chiffre2){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie3);
            }

            if (nbsaisie3==chiffre3){
                printf("Le chiffre %d est bien en place \n",nbsaisie3);
            }

            if (nbsaisie3==chiffre4){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie3);
            }



            //Verification de la quatieme position
            if (nbsaisie4==chiffre1){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie4);
            }

            if (nbsaisie4==chiffre2){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie4);
            }

            if (nbsaisie4==chiffre3){
                printf("Le chiffre %d est a la mauvaise place \n",nbsaisie4);
            }

            if (nbsaisie4==chiffre4){
                printf("Le chiffre %d est bien en place place \n",nbsaisie4);
            }


            if (nbsaisie1==chiffre1){
                if (nbsaisie2==chiffre2){
                    if (nbsaisie3==chiffre3){
                        if (nbsaisie4==chiffre4){
                            printf("Bravo le code est effectivement %d %d %d %d ",nbsaisie1,nbsaisie2,nbsaisie3,nbsaisie4);
                        }
                    }
                }
            }


        }

    if (i=0){
        printf("Vous avez perdu");
    }
}



