program Longueur_Chaine;
var
    texte : string;
    
begin
	write('Donner une chaine: ');
	read(texte);
	write('La longueur de la chaine : "',texte,'" est : ',length(texte));
end.