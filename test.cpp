#include <stdio.h>
#include <iostream>
#include <cstring>
#define TAILLE_MAX 1000
using namespace std;
int main()
{
    File* fichier = NULL;
    string chaine[TAILLE_MAX] = "";
    
    fichier = fopen("objets.txt","r");
    
        if(fichier != NULL){
            
            fgets(chaine,TAILLE_MAX,fichier);
            cout<<chaine<<endl;
            fclose(fichier);
        }

    return 0;
}