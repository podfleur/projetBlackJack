#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;
#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

int variableTemporairePourLeScore = 0;

vector<string> listeCouleur = {"Coeur", "Carreau", "Trèfle", "Pique"};
vector<string> listeFigure = {"As", "Deux", "Trois", "Quatre", "Cinq", "Six", "Sept", "Huit", "Neuf", "Dix", "Valet", "Dame", "Roi"};

class Carte {
 private:
    int valeur;
    string figure;
    string couleur;

public :
    Carte(string figure, string couleur){
    this->figure = figure;
    this->couleur = couleur;
        int chercheFigure = distance(listeFigure.begin(),find(listeFigure.begin(), listeFigure.end(),figure));
        if (figure == listeFigure[0]) {
                if (variableTemporairePourLeScore < 21) {
                    valeur = 11;
                } else {
                    valeur = 1;
                }
            }
        else if ( chercheFigure >= 9) {
            valeur = 10;
        }
        else {
            valeur = chercheFigure + 1;
        }
    }

    string get_figure() {
        return this->figure;
    }

    string get_couleur() {
        return this->couleur;
    }

    void set_valeur(int nouvelle_valeur) {
        this->valeur = nouvelle_valeur;
    }

    int get_valeur() {
        return this->valeur;
    }

    string cartes[52] = {"+-------+\n"
                         "|A      |\n"
                         "|       |\n"
                         "|   ♥   |\n"
                         "|       |\n"
                         "|      A|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|2      |\n"
                         "|   ♥   |\n"
                         "|       |\n"
                         "|   ♥   |\n"
                         "|     2 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|3      |\n"
                         "|   ♥   |\n"
                         "|   ♥   |\n"
                         "|   ♥   |\n"
                         "|     3 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|4      |\n"
                         "| ♥   ♥ |\n"
                         "|       |\n"
                         "| ♥   ♥ |\n"
                         "|     4 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|5      |\n"
                         "| ♥   ♥ |\n"
                         "|   ♥   |\n"
                         "| ♥   ♥ |\n"
                         "|      5|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|6      |\n"
                         "| ♥   ♥ |\n"
                         "| ♥   ♥ |\n"
                         "| ♥   ♥ |\n"
                         "|     6 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|7♥   ♥ |\n"
                         "|   ♥   |\n"
                         "| ♥   ♥ |\n"
                         "| ♥   ♥ |\n"
                         "|      7|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|8      |\n"
                         "| ♥ ♥ ♥ |\n"
                         "|  ♥ ♥  |\n"
                         "| ♥ ♥ ♥ |\n"
                         "|      8|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|9      |\n"
                         "| ♥ ♥ ♥ |\n"
                         "| ♥ ♥ ♥ |\n"
                         "| ♥ ♥ ♥ |\n"
                         "|      9|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|10 ♥ ♥ |\n"
                         "| ♥ ♥ ♥ |\n"
                         "|  ♥ ♥  |\n"
                         "| ♥ ♥ ♥ |\n"
                         "|     10 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|J♥     |\n"
                         "|       |\n"
                         "|   ♗  |\n"
                         "|       |\n"
                         "|     ♥J|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|Q♥     |\n"
                         "|       |\n"
                         "|   ♔  |\n"
                         "|       |\n"
                         "|     ♥Q|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|K♥     |\n"
                         "|       |\n"
                         "|   ♕   |\n"
                         "|       |\n"
                         "|     ♥K|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|A      |\n"
                         "|       |\n"
                         "|   ♦   |\n"
                         "|       |\n"
                         "|      A|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|2      |\n"
                         "|   ♦   |\n"
                         "|       |\n"
                         "|   ♦   |\n"
                         "|     2 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|3      |\n"
                         "|   ♦   |\n"
                         "|   ♦   |\n"
                         "|   ♦   |\n"
                         "|     3 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|4      |\n"
                         "| ♦   ♦ |\n"
                         "|       |\n"
                         "| ♦   ♦ |\n"
                         "|     4 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|5      |\n"
                         "| ♦   ♦ |\n"
                         "|   ♦   |\n"
                         "| ♦   ♦ |\n"
                         "|      5|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|6      |\n"
                         "| ♦   ♦ |\n"
                         "| ♦   ♦ |\n"
                         "| ♦   ♦ |\n"
                         "|     6 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|7♦   ♦ |\n"
                         "|   ♦   |\n"
                         "| ♦   ♦ |\n"
                         "| ♦   ♦ |\n"
                         "|      7|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|8      |\n"
                         "| ♦ ♦ ♦ |\n"
                         "|  ♦ ♦  |\n"
                         "| ♦ ♦ ♦ |\n"
                         "|      8|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|9      |\n"
                         "| ♦ ♦ ♦ |\n"
                         "| ♦ ♦ ♦ |\n"
                         "| ♦ ♦ ♦ |\n"
                         "|      9|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|10 ♦ ♦ |\n"
                         "| ♦ ♦ ♦ |\n"
                         "|  ♦ ♦  |\n"
                         "| ♦ ♦ ♦ |\n"
                         "|     10 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|J♦     |\n"
                         "|       |\n"
                         "|   ♗  |\n"
                         "|       |\n"
                         "|     ♦J|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|Q♦     |\n"
                         "|       |\n"
                         "|   ♔  |\n"
                         "|       |\n"
                         "|     ♦Q|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|K♦     |\n"
                         "|       |\n"
                         "|   ♕   |\n"
                         "|       |\n"
                         "|     ♦K|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|A      |\n"
                         "|       |\n"
                         "|   ♣   |\n"
                         "|       |\n"
                         "|      A|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|2      |\n"
                         "|   ♣   |\n"
                         "|       |\n"
                         "|   ♣   |\n"
                         "|     2 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|3      |\n"
                         "|   ♣   |\n"
                         "|   ♣   |\n"
                         "|   ♣   |\n"
                         "|     3 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|4      |\n"
                         "| ♣   ♣ |\n"
                         "|       |\n"
                         "| ♣   ♣ |\n"
                         "|     4 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|5      |\n"
                         "| ♣   ♣ |\n"
                         "|   ♣   |\n"
                         "| ♣   ♣ |\n"
                         "|      5|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|6      |\n"
                         "| ♣   ♣ |\n"
                         "| ♣   ♣ |\n"
                         "| ♣   ♣ |\n"
                         "|     6 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|7♣   ♣ |\n"
                         "|   ♣   |\n"
                         "| ♣   ♣ |\n"
                         "| ♣   ♣ |\n"
                         "|      7|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|8      |\n"
                         "| ♣ ♣ ♣ |\n"
                         "|  ♣ ♣  |\n"
                         "| ♣ ♣ ♣ |\n"
                         "|      8|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|9      |\n"
                         "| ♣ ♣ ♣ |\n"
                         "| ♣ ♣ ♣ |\n"
                         "| ♣ ♣ ♣ |\n"
                         "|      9|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|10 ♣ ♣ |\n"
                         "| ♣ ♣ ♣ |\n"
                         "|  ♣ ♣  |\n"
                         "| ♣ ♣ ♣ |\n"
                         "|     10 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|J♣     |\n"
                         "|       |\n"
                         "|   ♗  |\n"
                         "|       |\n"
                         "|     ♣J|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|Q♣     |\n"
                         "|       |\n"
                         "|   ♔  |\n"
                         "|       |\n"
                         "|     ♣Q|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|K♣     |\n"
                         "|       |\n"
                         "|   ♕   |\n"
                         "|       |\n"
                         "|     ♣K|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|A      |\n"
                         "|       |\n"
                         "|   ♠   |\n"
                         "|       |\n"
                         "|      A|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|2      |\n"
                         "|   ♠   |\n"
                         "|       |\n"
                         "|   ♠   |\n"
                         "|     2 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|3      |\n"
                         "|   ♠   |\n"
                         "|   ♠   |\n"
                         "|   ♠   |\n"
                         "|     3 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|4      |\n"
                         "| ♠   ♠ |\n"
                         "|       |\n"
                         "| ♠   ♠ |\n"
                         "|     4 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|5      |\n"
                         "| ♠   ♠ |\n"
                         "|   ♠   |\n"
                         "| ♠   ♠ |\n"
                         "|      5|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|6      |\n"
                         "| ♠   ♠ |\n"
                         "| ♠   ♠ |\n"
                         "| ♠   ♠ |\n"
                         "|     6 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|7♠   ♠ |\n"
                         "|   ♠   |\n"
                         "| ♠   ♠ |\n"
                         "| ♠   ♠ |\n"
                         "|      7|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|8      |\n"
                         "| ♠ ♠ ♠ |\n"
                         "|  ♠ ♠  |\n"
                         "| ♠ ♠ ♠ |\n"
                         "|      8|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|9      |\n"
                         "| ♠ ♠ ♠ |\n"
                         "| ♠ ♠ ♠ |\n"
                         "| ♠ ♠ ♠ |\n"
                         "|      9|\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|10 ♠ ♠ |\n"
                         "| ♠ ♠ ♠ |\n"
                         "|  ♠ ♠  |\n"
                         "| ♠ ♠ ♠ |\n"
                         "|     10 |\n"
                         "+-------+\n",

                         "+-------+\n"
                         "|J♠     |\n"
                         "|       |\n"
                         "|   ♗  |\n"
                         "|       |\n"
                         "|     ♠J|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|Q♠     |\n"
                         "|       |\n"
                         "|   ♔  |\n"
                         "|       |\n"
                         "|     ♠Q|\n"
                         "+------+\n",

                         "+-------+\n"
                         "|K♠     |\n"
                         "|       |\n"
                         "|   ♕   |\n"
                         "|       |\n"
                         "|     ♠K|\n"
                         "+-------+\n"
    };

    void afficher_carte() {
        int index = distance(listeFigure.begin(),find(listeFigure.begin(), listeFigure.end(),figure));
        if (this->couleur == listeCouleur[1]) {
            index += 13;
        }
        else if (this->couleur == listeCouleur[2]) {
            index += 26;
        }
        else if (this->couleur == listeCouleur[3]) {
            index += 39;
        }
        cout << cartes[index] << endl;
    }

};

class PaquetDeCartes {

private:
    vector<Carte> jeu;
    int nbCarte;

public:

    PaquetDeCartes(int nb=52) {
        this->nbCarte = nb;
    }

    void CreerJeu() {
        if (this->nbCarte == 52){
            for (int j = 0; j < 4 ; j++) {
                for (int i = 0; i < 13; ++i) {
                    Carte c = Carte(listeFigure[i], listeCouleur[j]);
                    this->jeu.emplace_back(move(c));
                }
            }
        } else if (this->nbCarte == 0){
            this->jeu;
        }
    }

     vector<Carte> get_jeu() {
        return this->jeu;
    }

    void melanger() {
        random_device rd;
        mt19937 g(rd());
        shuffle(this->jeu.begin(), this->jeu.end(), g);
    }

    void afficherPaquet(){
        cout << this->jeu.size() << endl;
        for (int i = 0; i < this->jeu.size(); ++i) {
            this->jeu[i].afficher_carte();
        }
    }
};

class Joueur{
private:
    string nomJoueur;
    vector<Carte> mainDuJoueur;
    int nbCartes;
    int score;

public:
    Joueur(string nom, vector<Carte> mainDuJoueur) {
        this->nomJoueur = nom;
        this->mainDuJoueur = mainDuJoueur;
        this->nbCartes = mainDuJoueur.size();
        for (int q = 0; q == nbCartes; q++) {
            score += mainDuJoueur[q].get_valeur();
        }
        this->score = score;
    }

    string getNom(){
        return this->nomJoueur;
    }

    vector<Carte> getMainJoueur(){
        return this-> mainDuJoueur;
    }

    int getScore() {
        return this-> score;
    }

    void afficherMainJoueur(){
        vector<Carte> main = getMainJoueur();
        for (int i = 0; i < main.size(); i++) {
            cout << "Element " << i << " : " << main[i].get_figure() << "de" << main[i].get_couleur() << endl;
        }
    }

    int getNbCartes(){
        return this->nbCartes;
    }

    void setNom(string new_name){
        this->nomJoueur = new_name;
    }
    void setMainJoueur(vector<Carte> new_hand){
        this->mainDuJoueur = new_hand;
    }
    void ajouterCarte(Carte new_card){
        this->mainDuJoueur.push_back(new_card);
    }

    void afficherInfos(){
        cout << "Nom du joueur : " << getNom() << endl;
        cout << "Nombre de cartes : " << getNbCartes() << endl;
        /*cout << "Main : \n" << getMainJoueur() << endl;*/
    }
};

string BlackJack(){

    /* Initialisation du prénom des joueurs */

    int nbJoueurs;
    string demandePrenom;
    vector<string> prenoms;

    cout << "Combien de joueurs participeront à la la partie ? " << endl;
    cin >> nbJoueurs;
    cout << "Voulez-vous ajouter des prénoms ?" << endl;
    cin >> demandePrenom ;
    if (demandePrenom == "oui"){
        for (int i = 0; i < nbJoueurs; ++i) {
            string new_prenom;
            cout << "Qui es-tu, Joueur " << i+1 << " ?" << endl;
            cin >> new_prenom;
            prenoms.push_back(new_prenom);
        }
    } else {
        cout << "Les joueurs seront definis par des numeros" << endl;
        for (int j = 0; j < nbJoueurs; ++j) {
            string joueur = "Joueur " + to_string(j+1);
            prenoms.push_back(joueur);
        }
    }

    // Création du paquet de cartes

    PaquetDeCartes paquet = PaquetDeCartes();
    paquet.CreerJeu();
    paquet.melanger();

    // Ajout des cartes dans la main de chaque joueur
    vector<Joueur> joueurs;
    for (int i = 0; i < nbJoueurs; ++i) {
        vector<Carte> mainJoueur;
        int j = 0;
        while(j < 2) {
            Carte carte = paquet.get_jeu()[i];
            mainJoueur.push_back(carte);
            j++;
        }
        Joueur nouveauJoueur = Joueur(prenoms[i], mainJoueur);
        joueurs.push_back(nouveauJoueur);
    }

    // Tour des joueurs
    for (int a = 0; a == nbJoueurs; a++) {
        cout << joueurs[a].getNom() << ", c'est à toi !" << endl;
        cout << "Ton nombre de points actuel : " << joueurs[a].getScore() << endl;
        cout << "Ta main actuelle : " << joueurs[a].afficherMainJoueur() << endl;
        // rectification : variabletemporairepourlescore
    }
}



int main() {
    #ifdef WIN32
        SetConsoleOutputCP(65001);
    #endif

    cout << "Faisons une partie de Blackjack !" << endl;
    BlackJack();



    /*Carte c1 = Carte(listeFigure[12], listeCouleur[2]);
    c1.afficher_carte();

    vector<Carte> mainJoueur;
    mainJoueur.push_back(c1);
    Joueur* j1 = new Joueur("Michel", mainJoueur);
    j1->afficherInfos();
    delete j1;

    Carte* c999 = new Carte("Six", "Coeur");
    c999->afficher_carte();*/




    return 0;
}
