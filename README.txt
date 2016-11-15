

on installe git si ce n'est pas déjà fait: $ sudo apt-get install git

pour recevoir les fichiers: sur LINUX
on ouvre une ligne de commande dans le fichier ou l'on veut recevoir les fichiers (POUR LA PREMIERE FOIS):

$ git init
$ git clone https://github.com/YollMuKrow/Monster.git


Pour mettre à jour les fichiers(en local):
- ATTENTION A BIEN ETRE DANS LE BON DOSSIER (apres avoir fait git clone il faut "avancer" d'un dossier)
on se place dans le bon fichier depuis le terminal puis:

$ git pull


Pour mettre à jours SUR LE SERVEUR après avoir fait des modifications:

- ATTENTION A BIEN ETRE DANS LE BON DOSSIER 
- TOUTS FICHERS SUPPRIMER EN LOCAL SUPPRIMERA LES FICHIERS DU SERVEURS SI VOUS FAITES LA MANIP JUSTE EN DESSOUS 

$ git add --all
$ git commit -m "description des changements faits"
$ git push
