#include <iostream>
#include <string>

int main()
{
    std::cout << "Rentrez une jolie phrase \n";
    std::string texte = "";
    getline(std::cin, texte);

    std::cout << "Rentrez un mot ou une partie de texte que vous souhaitez rechercher dans le texte que vous venez de rentrer \n";
    std::string CherchText = "";
    getline(std::cin, CherchText);

    std::cout << "Rentrez un mot ou un texte de remplacement \n";
    std::string RemplaceText = "";
    getline(std::cin, RemplaceText);

    std::string CopieTexte = "";

    int i = 0;
    int tailleLimite = texte.size() - CherchText.size();
    int firstPosTexte = 0;
    int lastPosTexte = 0;
    int compteur = 0;
    int caractTexte = 0;

    /*for (i = 0; i <= tailleLimite; i++) {
        if (texte.substr(i, CherchText.size()) == CherchText) {
            CopieTexte = CopieTexte + texte.substr(i - compteur, compteur) + RemplaceText;
            //std::cout << "et je redemarre a " << i + CherchText.size();

            std::cout << "COMPTEUR = " << compteur<< "\n";
            std::cout << "I = " << i << "\n";

            i += CherchText.size();
            compteur = 0;
        }
        else {
            //
        }
        compteur++;
    }

    std::cout << CopieTexte;*/

    for (caractTexte = 0; caractTexte < texte.size(); caractTexte++) {
        if (caractTexte <= tailleLimite && texte.substr(caractTexte, CherchText.size()) == CherchText) {
                CopieTexte += RemplaceText + " ";
                caractTexte += CherchText.size();
        }
        else {
            CopieTexte += texte[caractTexte];
        }
    }
    std::cout << CopieTexte;
}