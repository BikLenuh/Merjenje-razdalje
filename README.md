# Merjenje-razdalje
Merjenje razdalje s pomočjo arduino in senzorjem razdalje.
Senzor razdalje deluje z ultrazvočnim valovanjem, bolj podrobno pošlje en ultrazvočni valj katerega nato dobi nazaj in glede na čas izračuna razdaljo.
Za vajo nam je namenjeno 17 šolskih ur.
Sodelujeva 2 dijaka.
Za vajo je dodeljena razlaga in pomoč ob kodi, ter pripeta slika vezja za lažje razumevanje in sledenje, je prijazna začetnikom.

Navodila:
Treba je najprej narediti vezje. Vezje naredimo po skici priloženi iz easyeda. Paziti moramo da pazljivo povežemo kable na pravilne inpute ter, da se ti ne iztaknejo iz ohišja. Po končani sestavi vezja napišemo kodo. Kodo lahko poskusimo napisati sami lahko pa samo prekopiramo že dodeljeno kodo, kjer je tudi vsak del kode razložen.Preden naredimo ogrodje moramo še poskusiti, da naprava in koda delujeta. Na koncu pa samo še naredimo ohišje in zvrtamo luknje po dodeljeni skici lahko pa tudi drugače.
|Potrebni materiali:|
| ------------- |
|Arduino 1x|
|Protoboard 1x|
|LCD zaslon 1x|
|Senzor razdalje 1x|
|Potenciometer 500k 1x|
|Arduino kabel 1x|
|Kabli 21x|
|Plastična plošča za ohišje 2x|
|Dolgi vijaki za ohišje 4x|
|Matice za vijake 12x|
|(poljubno) Podložke za vijake 4-16x|

Komentar:
Naloga ni preveč zahtevna ampak je obenem zelo zahrbtna saj moramo natančno povezati žice glede na inpute in outpute v arduino kodi. Prav tako pa ni bilo treba izračunati nobenega upora zaradi česar je zelo prijazna začetnikom kateri še ne vedo kako to izračunati.
Za naju je imela le malo preglavic in to so, da sva rabila vezje popraviti vsaj 3x, ker se je vsakič zgodilo, da nekaj ne dela. Prav tako pa sva imela težave z lcd displayom saj sva morala potenciometer natančno nastaviti drugače ni prikazovalo ničesar. Naloga na srečo na koncu ni potrebovala toliko časa vendar bi ga brez predznanja potrebovala veliko več. 
Naloga bi lahko izboljšana z bolj kvalitetnim senzorjem, kabli ter potenciometrom.
Senzor prav tako ne mora meriti zelo majhnih razdalj saj bi pogosto (pod 4 cm) samo prikazal 3138.3 cm ali neko drugo veliko številko, prav tako pa ne mora meriti prevelikih razdalj (nad 450cm) saj bi izpisal neko drugo preveliko številko.
Izmerjena napaka naprave: pri kratkih razdaljah (4 - 15 cm) je napaka od 1 do 3mm, pri srednjih razdaljah (15 - 60 cm) je napaka od 3 do 10 mm, pri dolgih razdaljah (60 - 450 cm) pa je napaka od 1 do 10cm
