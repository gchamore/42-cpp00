# 🚀 C++ - Module 00

## 📝 Présentation

Le module **C++ 00** est une introduction à la **Programmation Orientée Objet (OOP)** en **C++ 98**.  
Il couvre les bases du langage : **namespaces, classes, fonctions membres, listes d'initialisation, static, const**, et d'autres concepts fondamentaux.  

L’objectif est de vous initier aux principes de l'OOP et d'explorer les différences avec le langage C.

---

## 🛠️ Fonctionnalités

- **Exercice 00 : Mégaphone**
  - Manipulation des arguments en ligne de commande.
  - Utilisation des **flux de sortie** (`std::cout`).
  - Conversion de texte en majuscules.

- **Exercice 01 : My Awesome PhoneBook**
  - Implémentation d'un **répertoire téléphonique** en **C++ 98**.
  - Manipulation de **classes** et **objets**.
  - Gestion des entrées utilisateur et **affichage formaté**.

- **Exercice 02 : L'emploi de vos rêves**
  - Reconstitution du fichier **Account.cpp** à partir des tests.
  - Compréhension des **constructeurs et destructeurs**.
  - Utilisation des méthodes **statique et publique**.

---

## 📌 Technologies Utilisées

- **C++ 98**  
- **Flux d'entrée/sortie (`std::cout`, `std::cin`)**  
- **Manipulation de classes et objets**  
- **Gestion de la mémoire (new/delete)**  

---

## 🏗️ Structure du Projet

📂 ex00  
 ┣ 📜 Makefile  
 ┣ 📜 megaphone.cpp  

📂 ex01  
 ┣ 📜 Contact.class.hpp  
 ┣ 📜 Contact.cpp  
 ┣ 📜 Makefile  
 ┣ 📜 PhoneBook.class.hpp  
 ┣ 📜 PhoneBook.cpp  
 ┣ 📜 main.cpp  

📂 ex02  
 ┣ 📜 Account.cpp  
 ┣ 📜 Account.hpp  
 ┣ 📜 Makefile  
 ┣ 📜 tests.cpp    

---

## 🔥 Difficultés Rencontrées

- **Respect du standard `C++ 98`** : Gestion des contraintes et limitations du langage.  
- **Manipulation des entrées utilisateur** : Vérification et validation des données.  
- **Gestion de la mémoire** : Éviter les **fuites mémoire** avec des constructeurs/destructeurs bien définis.  
- **Lecture et analyse des fichiers de test** pour reconstituer **Account.cpp**.  

---

## 🏗️ Mise en place

1. **Cloner le dépôt** :
**Exercice 00** : 
   ```bash
   cd ex00
   make
   ./megaphone "Hello World!"
   make fclean
   ```

**Exercice 01** :
  ```bash
   cd ex01
   make
   ./phonebook
   make fclean
   ```

**Exercice 02** :
   ```bash
   cd ex02
   make
   ./tests
   make fclean
   ```

---

## 👨‍💻 Équipe  

👤 Grégoire Chamorel (Gchamore)  

---

## 📜 Projet réalisé dans le cadre du cursus 42.  

Tu peux bien sûr modifier ce README selon tes besoins, ajouter plus de détails sur ton approche et des instructions d’installation précises. 🚀  
