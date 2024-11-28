# Nonogram Checker

Marica Mihai
312CA

	
1. Ninel

	Deoarece șirul dat este foarte mare, iar memorarea sa nu este posibilă, am rezolvat problema în alt mod: am comparat pe rând fiecare 3 termeni consecutivi ai șirului, identificând astfel copacii speciali. Ajutandu-mă de variabilele "S", "m_a", "xmax_impar" și "xmin_par", am calculat și afișat toate cerințele problemei, ținând cont și de cazurile speciale (pentru N<3 nu există copaci speciali, termenii poziționați pe prima și ultima poziție a șirului nu pot fi copaci speciali, dacă nu există copaci speciali pe poziții pare/impare, "xmin_par"/"xmax_impar" devine "0").


2. Vectsecv

	Ținând cont de restricțiile problemei (m+k<=100), am declarat un vector "v" de lungime 100, inițializându-i toate elementele cu "0". Cu ajutorul funcțiilor "n_descrescator" și "n_crescator" am calculat diferențele dintre numărul format cu aceleași cifre, dar în ordine descrescătoare, respectiv în ordine crescătoare, pe care le-am memorat în vectorul "v". Elementele vectorului plasate între termenii care coincid reprezintă secvența căutată, inclusiv numărul care coincide, poziția acestuia în vector reprezentând și numărul de diferențe realizate până la întâlnirea primului număr din secvența periodică. În final, afișez numărul menționat mai sus și secvență obținută.


3. Codeinvim

	Am calculat în variabila "p" punctajul obținut de Mihai. Dacă acesta este mai mic sau egal decât "p_min", el nu mai are nevoie de nicio mărire, iar dacă nu, memorez în vectorul "a" punctajul pe care îl mai poate obține la fiecare mărire și îl ordonez, adunând la "p", în ordine descrescătoare și pe rând, punctajele, până când "p" devine mai mare decât "p_min". Utilizând un contor "m", afișez numărul minim de materii la care Mihai ar fi trebuit să ia nota 10 (pentru situația în care acesta nu poate fi bursier chiar dacă merge la toate măririle, voi afișa "-1").


4. Nomogram

	Verific dacă matricea citită respectă restricțiile pentru fiecare dintre linii (respectându-le astfel automat și pe cele pentru coloane). În vectorul "a" rețin câte grupuri colorate sunt pe fiecare linie, iar în matricea "b", dimensiunile acestor grupuri. Dacă pe fiecare linie a matricei "m" se întâlnesc la fel de multe grupuri ca în liniile vectorului "a", contorul "ok1" va rămâne "1" (altfel se va modifica în "0"), iar dacă lungimile acestora vor fi precum cele din matricea "b", contorul "ok2" vă rămâne "1" (în caz contrar, de asemenea, se va modifica în "0"). Ținând cont și de toate restricțiile (să se folosească și grupurile de la început de linie, precum și cele de la final de linie), programul va afișă mesajul "Corect" dacă matricea "m" respectă cele două condiții, iar dacă nu, mesajul "Eroare".

