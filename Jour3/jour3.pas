program Calcul;
var
Longueur : real;
Largeur    : real;

begin
	writeln(' ============== Ce programme calcul l"aire et le perimetre d"un rectangle ==============');
write('Donner la longueur de votre rectangle : ' );
read(Longueur);
//Attention aucun control sur la valeur saisie

write('Donner la largeur de votre rectangle : ');
read(Largeur);
//Attention aucun control sur la valeur saisie

writeln('Le perimetre vaut : ',((Longueur + Largeur)*2):0:2,' et l"aire vaut : ', (Longueur * Largeur):0:2);
end.