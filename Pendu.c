#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

//Methode pour la rentrée d'un entier par l'utilisateur
//Qui permet de controler les erreurs de saisie
//retourne un entier
int choixEntier(){
    //Déclaration des variables
	int resultat;
	char choix[50];
	int indice;
	int correct;

	do
	{   
		correct = 1; 
		indice = 0;
		printf("\n\t\t\t\t\t     Entre le nombre:");
        //On récupere ce que l'utilisateur a tapé dans un tableau de char
		scanf("%s",choix);

        //On parcourt le tableau de char jusqu'a la fin de chaine
		while(choix[indice] != '\0')
		{

            //Si le caractere n'est pas un chiffre on modifie le booleen
			if (choix[indice] < '0' || choix[indice] > '9'){

				correct = 0;     
			}

            //On incremente l'indice pour passer au caractere suivant
			indice++;

		}
        //Si le booleen a changé on affiche un message d'erreur
		if (correct == 0){
			printf("\n\t\t\t\t\tEntre un nombre, pas une lettre...\n");
		}
    //tant que tout les caracteres de la chaines ne sont pas des chiffres on recommence    
	}while( correct == 0);

    //On utilise la fonction strtol pour changer une chaine de caractere en long ou int
    //strtol(chaineDeCaractere,char **end,base)
	resultat = strtol( choix, NULL, 10 );

	while (getchar() != '\n') ;

	return resultat;

}

char lireCaractere() 

{ 

	char caractere = 0;

    caractere = getchar(); // On lit le premier caractère

    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà


    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer) 
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu 

}

void affichageBienvenue(){

	//Affichage de bienvenue sur le jeu
	printf("\t\t\t\t\t    ______ _                                     \n");           
	printf("\t\t\t\t\t    | ___ (_)                                        \n");       
	printf("\t\t\t\t\t    | |_/ /_  ___ _ ____   _____ _ __  _   _  ___    \n");       
	printf("\t\t\t\t\t    | ___ \\ |/ _ \\ '_ \\ \\ / / _ \\ '_ \\| | | |/ _ \\\n");          
	printf("\t\t\t\t\t    | |_/ / |  __/ | | \\ V /  __/ | | | |_| |  __/\n");          
	printf("\t\t\t\t\t    \\____/|_|\\___|_| |_|\\_/ \\___|_| |_|\\__,_|\\___|\n\n\n\n");          
	printf("\t\t\t\t\t                  _          _                  _      \n"); 
	printf("\t\t\t\t\t                 | |        (_)                | |\n");      
	printf("\t\t\t\t\t ___ _   _ _ __  | | ___     _  ___ _   _    __| |_   _\n"); 
	printf("\t\t\t\t\t/ __| | | | '__| | |/ _ \\   | |/ _ \\ | | |  / _` | | | |\n");
	printf("\t\t\t\t\t\\__ \\ |_| | |    | |  __/   | |  __/ |_| | | (_| | |_| |\n");
	printf("\t\t\t\t\t|___/\\__,_|_|    |_|\\___|   | |\\___|\\__,_|  \\__,_|\\__,_|\n");
	printf("\t\t\t\t\t                           _/ |\n");                         
	printf("\t\t\t\t\t                          |__/ \n\n");                         
	printf("\t\t .----------------.  .----------------.  .-----------------. .----------------.  .----------------.\n");   
	printf("\t\t| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");  
	printf("\t\t| |   ______     | || |  _________   | || | ____  _____  | || |  ________    | || | _____  _____ | |\n");  
	printf("\t\t| |  |_   __ \\   | || | |_   ___  |  | || ||_   \\|_   _| | || | |_   ___ `.  | || ||_   _||_   _|| |\n");  
	printf("\t\t| |    | |__) |  | || |   | |_  \\_|  | || |  |   \\ | |   | || |   | |   `. \\ | || |  | |    | |  | |\n");  
	printf("\t\t| |    |  ___/   | || |   |  _|  _   | || |  | |\\ \\| |   | || |   | |    | | | || |  | '    ' |  | |\n");  
	printf("\t\t| |   _| |_      | || |  _| |___/ |  | || | _| |_\\   |_  | || |  _| |___.' / | || |   \\ `--' /   | |\n");  
	printf("\t\t| |  |_____|     | || | |_________|  | || ||_____|\\____| | || | |________.'  | || |    `.__.'    | |\n");  
	printf("\t\t| |              | || |              | || |              | || |              | || |              | |\n");  
	printf("\t\t| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");  
	printf(" \t\t'----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n\n");
	printf("\n\t\t\t\t\t    Le but du jeu est de trouver le mot secret");
	printf("\n\t\t\t\t\ten proposant lettre par lettre avant d'être pendu...\n\n");
}

void afficherFin(){

	printf("\t\t\t .----------------.  .----------------.  .----------------. \n");
	printf("\t\t\t| .--------------. || .--------------. || .--------------. |\n");
	printf("\t\t\t| |   ______     | || |  ____  ____  | || |  _________   | |\n");
	printf("\t\t\t| |  |_   _ \\    | || | |_  _||_  _| | || | |_   ___  |  | |\n");
	printf("\t\t\t| |    | |_) |   | || |   \\ \\  / /   | || |   | |_  \\_|  | |\n");
	printf("\t\t\t| |    |  __'.   | || |    \\ \\/ /    | || |   |  _|  _   | |\n");
	printf("\t\t\t| |   _| |__) |  | || |    _|  |_    | || |  _| |___/ |  | |\n");
	printf("\t\t\t| |  |_______/   | || |   |______|   | || | |_________|  | |\n");
	printf("\t\t\t| |              | || |              | || |              | |\n");
	printf("\t\t\t| '--------------' || '--------------' || '--------------' |\n");
	printf("\t\t\t'----------------'  '----------------'  '----------------' \n");
}

int recommencerPartie(){

	int resultat = 0;
	int new = 0;

	printf("\n\n\t\t\t\t    Souhaites-tu faire une autre partie ?");
	printf("\n\t\t\t\t\t\t  1 - Oui");
	printf("\n\t\t\t\t\t\t  2 - Non\n");

    //On recommence tant que la valeur n'est pas 1 ou 2
	while(new != 1 && new != 2){

		new = choixEntier();
	}

	resultat = 1;

    //Si l'utilisateur veut quitter on modifie le booleen
	if(new == 2){

		resultat = 0;
	}

	return resultat;

}

void affichagePendu(int coup){

	if(coup == 9){

		printf("\t\t\t\t\t\t   __________\n");
	}

	if(coup == 8){

		printf("\t\t\t\t\t\t  |\n");
		printf("\t\t\t\t\t\t  |\n");
		printf("\t\t\t\t\t\t  |\n");
		printf("\t\t\t\t\t\t  |\n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 7){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 6){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 5){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |     O\n");
		printf("\t\t\t\t\t\t  |     \n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 4){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |     O\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |     \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 3){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |     O\n");
		printf("\t\t\t\t\t\t  |    /|\n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 2){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |     O\n");
		printf("\t\t\t\t\t\t  |    /|\\\n");
		printf("\t\t\t\t\t\t  |      \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 1){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |     O\n");
		printf("\t\t\t\t\t\t  |    /|\\\n");
		printf("\t\t\t\t\t\t  |    /   \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}

	if(coup == 0){

		printf("\t\t\t\t\t\t   ______\n");
		printf("\t\t\t\t\t\t  |     |\n");
		printf("\t\t\t\t\t\t  |     O\n");
		printf("\t\t\t\t\t\t  |    /|\\\n");
		printf("\t\t\t\t\t\t  |    / \\  \n");
		printf("\t\t\t\t\t\t  |__________\n");
	}
}

void motDico(char* mot){

	int nbAleatoire = 0;
	int nombreDeMot = 0;
	FILE* fichier = NULL;
	char caractereLu = '0';
	char chaine[30] = "";

	//On ouvre le fichier 
	fichier = fopen("dico.txt", "r");

	//si l'ouverture du fichier a réussie
	if (fichier != NULL){

   		// On lit maximum 30 caractères du fichier, on stocke le tout dans "motSecret"
   		//et on compte le nombre de mot
		while(fgets(chaine, 30, fichier) != NULL){ 
			nombreDeMot++;
		}
    	//On met le curseur au debut du fichier
		rewind(fichier);
    	//On initialise le srand pour le random
		srand(time(NULL)); 
		//On calcule le nombre aléatoire dont le maximum est le nombre de mot (On utilise le modulo)
		nbAleatoire = rand() % nombreDeMot;
		
		while (nbAleatoire > 0){
			//On lit chaque caractere et on le met dans la variableLu
			caractereLu = fgetc(fichier);
      		//si le caractere lu est \n c'est qu'on a passé une ligne du fichier
			if (caractereLu == '\n'){
    			//Donc on décrémente le nombre aleatoire
    			//Jusqu'a ce que le nombre aléatoire est a 0 
    			//Donc on a passé un nombre de ligne qui correspond au nombre aléatoire
				nbAleatoire--;
			}
		}
    	//On récupere la ligne 
		fscanf(fichier,"%s",mot);
   	    //On ferme la lecture du fichier
		fclose(fichier);
	}
}

void choixMode(char* mot){

	int choix = 0;

	printf("\n\t\t\t\t\t\t\t   Choisis ton mode:  \n");
	printf("\n\t\t\t\t\t\t\t    1 - Un Joueur ");
	printf("\n\t\t\t\t\tLe mot secret est choisit aléatoirement dans le dico\n");
	printf("\n\t\t\t\t\t\t\t    2 - Deux Joueur ");
	printf("\n\t\t\t\t\t    L'autre joueur choisit le mot a trouver\n\n");

	do{
		choix = choixEntier();
	}while(choix != 1 && choix != 2);

	if (choix == 1){
		
		motDico(mot);

	}else{
		printf("\n\t\t\tAttention le mot s'affichera ne pas montrer l'écran au joueur devant deviner");
		printf("\n\t\t\t\t\t\t  Choix du mot :");
		scanf("%s",mot);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}

}

int main ( int argc, char** argv )
{

		//Déclarations

		char motSecret[30];
		char lettreProposee[30];
		char motAffiche[30];
		char lettre;
		int coup,continuerPartie,motTrouve,indiceLettreProposee,i,j,compteur,gagne,lettreDejaProposee;
		
		affichageBienvenue();
	do{

		choixMode(motSecret);
		int longueurDuMot = strlen(motSecret);
		//Initialisation des variables
		
		lettre = '0';
		motTrouve = 0;
		indiceLettreProposee = 0;
		i = 0;
		j = 0;
		compteur = 0;
		coup = 10;
		for(i = 0 ; i < 30;i++){
			motAffiche[i]= ' ';
		}
		//On initialise le tableau des lettres proposées
		for(i = 0 ; i < 30;i++){

			lettreProposee[i]= ' ';
		}

		//On met des étoiles a la place des lettres dans le mot affiché
		for(i = 0; i < longueurDuMot; i++){

			motAffiche[i] = '*';
		}

		compteur = 0;
		do{	
			lettreDejaProposee = 0;
			gagne = 1;

			printf("\n\t\t\t\t\t\tQuel est le mot secret ?  ");
			printf("%s", motAffiche);
			printf("\n\t\t\t\t\tLettre déjà proposées : ");

			for(i = 0; i < 30;i++){
				printf("%c",lettreProposee[i]);
			}
			
			printf("\n\t\t\t\t\t\t   Propose une lettre :");
			lettre = lireCaractere();

			for(i = 0; i < 30;i++){
				//Si la lettre est presente dans le tableau des lettres proposées
				//on passe le booleen a 1 pour vrai
				if(lettre == lettreProposee[i]){
					lettreDejaProposee = 1;
				}
			}
			//si la lettre a deja été proposée on l'affiche sinon on l'ajoute au tableau
			if(lettreDejaProposee){
				printf("\n\t\t\t\t\tTu as dejà proposé la lettre %c\n",lettre);
			}
			else{
				lettreProposee[indiceLettreProposee] = lettre;
			}
			
			//On parcourt chaque lettre du mot secret
			for(i=0;motSecret[i] != '\0';i++){
				//On parcourt le tableau avec les lettres proposées par l'utilisateur
				for(j = 0; j < strlen(lettreProposee);j++){
					//si une lettre proposée par l'utilisateur
					//correspond avec une lettre du mot secret
					//On remplace l'etoile du mot affiché par la lettre du mot secret
					if(motSecret[i] == lettreProposee[j]){
						motAffiche[i] = motSecret[i];
					}
				}	
			}

			//On incremente l'indice pour le tableau des lettres proposées
			indiceLettreProposee ++;

			//On parcourt chaque lettre du mot secret
			for(i = 0;i < strlen(motAffiche);i++){
				//On incremente le compteur quand la lettre du mot secret correspond a la lettre du mot affiché
				if(motSecret[i] == motAffiche[i]){
					if(motSecret[i] == lettre){
						//Lorsque la lettre est correcte passe la variable gagne a 0
						gagne = 0;
						compteur ++;
					}
					
				}
			}
			//On retire la valeur de gagne au nombre de coup
			//(gagne = 1 si la lettre n'est pas dans le mot)
			coup = coup - gagne;

			//On affiche le dessin du pendu
			affichagePendu(coup);

			//si le compteur est égal a la taille du mot secret
			if(longueurDuMot == compteur){

				motTrouve = 1;
			}

		//boucle de jeu
		}while(motTrouve == 0 && coup > 0);

		//Si le nombre de coup est a zero la partie est perdue
		if(coup == 0){
			printf("\t\t\t\t\t\tPartie terminée...\n");
			printf("\n\t\t\t\t\t  Le mot a trouver était %s",motSecret);
		}
		else{
			printf("\n\t\t\t\t\tFélicitations tu as gagné !!!");
			printf("\n\t\t\t\t\t  Le mot a trouver était %s",motSecret);
		}

		continuerPartie = recommencerPartie();

	//Boucle qui permet de relancer le programme au debut
	}while( continuerPartie != 0);

	afficherFin();

	return 1;
}
