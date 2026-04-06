program Matrice2D;
Uses crt;
var 
	col,line,i,j,elt,Somligne, Somcol  : integer;
	Matrice                                       : array of  array of integer;
begin
	
		write('Donner le nombre de lignes de la matrice : ');
		read(line);
        //Pas de control
	
		write('Donner le nombre de colonnes de la matrice : ');
		read(col);
		//Pas de control
        SetLength(Matrice,line);
        for i := 0 to line do
            SetLength(Matrice[i],col);
    
        for i := 0 to line-1  do
        begin
            for j := 0 to col -1 do
            begin
                write('Donner l"element ',i+1,',',j+1,': ');
                readln(Matrice[i,j]);
            end;
        end;
        

        writeln('VOICI LA MATRICE FOURNIE');
        writeln;
        for i := 0  to line-1 do
        begin
            write('[ ');
            for j := 0 to col-1 do
                begin
                	write(' ');
                write(Matrice[i,j]);			
            end;
            writeln(' ]');
        end;

        for i := 0 to line-1 do
            begin
                for j := 0 to col-1 do
                begin
                Somligne += Matrice[i,j];		
            end;
        end;

        for j := 0 to col-1 do
            begin
                for i := 0 to line-1 do
                begin
                Somcol += Matrice[i,j];		
            end;
        end;
	writeln('SOMME DES LIGNES   : ',Somligne);
	writeln('SOMME DES COLONNES : ',Somcol);
end.