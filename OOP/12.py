#EX1
class animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age
class mamnifere (animal):
    def __init__(self, name, age, couleur):
        super().__init__(name, age)
        #it can be also animal.__init__(self, name, age)  (not recommended)
        self.couleur = couleur
        self.voice = "hello"
class Opivare (animal ):
    def __init__(self, name, age, couleur, taille):
        super().__init__( name, age, couleur)
        self.taille = taille
        self.voice = "grrrr"
class poule(animal):
    def __init__(self, name, age, couleur, taille):
        super().__init__( name, age, couleur)
        self.taille = taille
        self.voice = "cokcok"
class chat (animal):
    def __init__(self, name, age, couleur, taille):
        super().__init__( name, age, couleur)
        self.taille = taille
        self.voice = "meow"      
class Ornithorynque(mamnifere):
    def __init__(self, name, age,couleur,nb_oeufs):
        super().__init__( name, age, couleur)
        self.nb_oeufs = nb_oeufs
x1= Ornithorynque("orni", 10, "black", 10)
print(x1.voice)
#EX2
class livre:
    def __init__(self, titre, auteur, editeur,nbPages,annee):
        self.titre = titre
        self.auteur = auteur
        self.editeur = editeur
        self.nbPages = nbPages
        self.annee = annee
    def __repr__(self):
        return f"Titre : {self.titre} Auteur : {self.auteur} Editeur : {self.editeur} Nombre de pages : {self.nbPages} Année : {self.annee}"
    def setTitre(self, titre):
            self.titre = titre
    def getTitre(self):
        return self.titre
    def setAuteur(self, auteur):
        self.auteur = auteur
    def getAuteur(self):
        return self.auteur  
    def setEditeur(self, editeur):
        self.editeur = editeur
    def getEditeur(self):
        return self.editeur
    def setNbPages(self, nbPages):
        self.nbPages = nbPages
    def getNbPages(self):
        return self.nbPages
    def setAnnee(self, annee):
        self.annee = annee
    def getAnnee(self):
        return self.annee                    
    @classmethod
    def creation_version1(cls , titre, auteur, editeur,nbPages,annee):
        return cls(titre, auteur, editeur,nbPages,annee)
    @staticmethod
    def CompareLaunchDate(l1,l2):
        if l1.annee > l2.annee:
            return "L2 est plus ancien que L1"
        return    "L1 est plus ancien que L2" 
    @staticmethod
    def creation_version2( titre, auteur, editeur,nbPages,annee):
        return livre(titre, auteur, editeur,nbPages,annee)

l1=livre.creation_version1("Le petit prince","Antoine de Saint-Exupéry","Gallimard",96,1943)
l2= livre("Le petit amour ","Sadio Mane","Mahmoud",966,2003)
l3=livre.creation_version2("King","Antoine Grizman","Ahmed",22,2005)
print(l1)
l1.setAnnee(1999)
print(l1)
print(livre.CompareLaunchDate(l1,l2))
print(livre.CompareLaunchDate(l1,l3))
