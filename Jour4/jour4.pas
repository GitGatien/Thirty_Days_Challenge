program Permutation;
var
nbr1    : real;
nbr2    : real;
temp   : real;

begin
	writeln(' =================== Ce pregramme permute les valeurs de deux variables.  ===================');
	write('Donner la premiäre valeur : ');
	read(nbr1);
	//Attention aucun control sur la valeur saisie.

	write('Donner la deuxiäme valeur : ');
	read(nbr2);
	//Attention aucun control sur la valeur saisie

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	writeln('********** PERMUTATION AVEC VARIABLE TEMPORAIRE ********** ');
	writeln(' Avant permutation : Nombre1 = ',nbr1:0:2,'  Nombre2 =  ',nbr2:0:2);
	temp := nbr1;
	nbr1 := nbr2;
	nbr2 := temp;
	writeln(' Apräs permutation : Nombre1 = ',nbr1:0:2,'  Nombre2 =  ',nbr2:0:2);

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	writeln(' ********** PERMUTATION SANS VARIABLE TEMPORAIRE ********** ');
	writeln(' Avant permutation : Nombre1 = ',nbr1:0:2,'  Nombre2 =  ',nbr2:0:2);
	nbr1 := nbr1 + nbr2;
	nbr2 := nbr1 - nbr2;
	nbr1 := nbr1 - nbr2;
	writeln(' Avant permutation : Nombre1 = ',nbr1:0:2,'  Nombre2 =  ',nbr2:0:2);
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
end.