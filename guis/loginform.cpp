#include "loginform.h"

LoginForm::LoginForm()
{
    //Génération du formulaire
    pushButtonLogin = new QPushButton(tr("Connexion !", "Boutton pour la connexion à Mine++"));
    pushButtonQuit = new QPushButton(tr("Annuler et quitter", "Bouton utilisé pour quitter le logiciel"));
        QObject::connect(pushButtonLogin, SIGNAL(clicked()), this, SLOT(close()));

    //Layout

}

LoginForm::~LoginForm()
{
}
