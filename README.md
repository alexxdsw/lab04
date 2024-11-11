Tic-Tac-Toe C++ Project
Descriere
Acest proiect implementează jocul Tic-Tac-Toe în C++, punând accent pe utilizarea funcționalităților moderne ale limbajului, precum containerele STL, smart pointers și algoritmii STL. Scopul este de a demonstra cunoștințele dobândite în cadrul laboratorului, respectând cerințele de utilizare a bibliotecii standard C++.

Cerințe de Sistem
Compilator C++ compatibil cu C++11 sau mai nou (de exemplu, GCC, Clang).
Git pentru gestionarea versiunii, deoarece proiectul este organizat într-un repository Git.
Structura Proiectului
board.hpp și board.cpp: Definirea și implementarea clasei Board, responsabilă pentru logica tablei de joc. Conține funcționalități pentru desenarea tablei, plasarea markerelor, verificarea câștigătorului și supraîncărcarea operatorilor de intrare/ieșire.
game.hpp și game.cpp: Definirea și implementarea clasei Game, care gestionează logica de joc, inclusiv alternarea jucătorilor, verificarea câștigătorului, și controlul tururilor.
main.cpp: Punctul de intrare al aplicației, unde se inițiază și se rulează jocul.
Makefile: Fișier de construcție pentru automatizarea compilării. Conține reguli pentru compilarea și legarea fișierelor sursă, precum și o comandă de curățare a fișierelor obiect și a executabilului.
Funcționalități
Tabela de joc (Board):

DrawBoard(): Afișează grafic tabla de joc.
PlaceMarker(int slot, char marker): Plasează un marker ('X' sau 'O') pe poziția aleasă de jucător.
CheckWinner(): Verifică dacă există un câștigător.
Logica jocului (Game):

Start(): Inițiază bucla principală a jocului.
TakeTurn(): Permite jucătorilor să aleagă poziția pentru markerul lor.
SwapPlayer(): Schimbă markerul și jucătorul curent.
CheckWin() și CheckDraw(): Verifică dacă jocul s-a încheiat cu o victorie sau o remiză.
Operatori supraincarcati:

operator>> și operator<<: Permit citirea și afișarea tablei de joc utilizând fluxurile de intrare/ieșire.
Smart Pointers și STL:

Folosim std::shared_ptr pentru gestionarea memoriei obiectului Board.
Utilizăm STL pentru optimizarea căutării, comparării și așezării datelor în program.
Compilare și Rulare
Pentru a compila și rula proiectul, urmați acești pași:

Clonați repository-ul:

bash
Copiază codul
git clone <URL-ul-repository-ului>
cd <numele-repository-ului>
Compilați proiectul utilizând Makefile-ul:

bash
Copiază codul
make
Rulați jocul:

bash
Copiază codul
./TicTacToe
Curățați fișierele obiect și executabilul:

bash
Copiază codul
make clean
Exemplar de Rulare
plaintext
Copiază codul
 Jucătorul 1 ('X'), introduceți un număr de la 1 la 9 pentru a plasa markerul: 5
   1 | 2 | 3
  ---|---|---
   4 | X | 6
  ---|---|---
   7 | 8 | 9

 Jucătorul 2 ('O'), introduceți un număr de la 1 la 9 pentru a plasa markerul: 3
   1 | 2 | O
  ---|---|---
   4 | X | 6
  ---|---|---
   7 | 8 | 9

...
Concluzii
Proiectul Tic-Tac-Toe a fost dezvoltat cu scopul de a aplica principii avansate ale C++, incluzând utilizarea STL, smart pointers și supraîncărcarea operatorilor pentru o gestionare eficientă și modernă a codului. Acest proiect demonstrează cum pot fi folosite aceste tehnici pentru dezvoltarea unui joc simplu, dar modular, și ușor de extins.
