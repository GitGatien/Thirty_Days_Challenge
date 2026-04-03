program Trie_Selection;
const
    MAX = 100;
var
       Tab : array[1..MAX] of integer;
       indCpt : integer;
       indMin : integer;
       i,n        : integer;
       temp     :  integer;
       
 begin
        repeat
            write(' Donner le nombre d"entiers a saisir qui est compris entre 1 et 100 : ');
            read(n);
        until((n > 0 ) and (n < 101));
        for i := 1 to n do
            begin
                    write('veuillez saisir element ',i,' du tableau :');
                    read(Tab[i]);
                //Attention aucun control
            end;
        writeln('Tableau Fourni :'); 
        for i := 1 to n do
            begin
            	write('[',Tab[i],']');
            end;   
        for indCpt := 1 to n do
            begin
                indMin := indCpt;
                for i := indCpt + 1 to  n do
                    begin
                     if  Tab[i]  <  Tab[indMin] then
                         indMin := i;
                    end;
                temp  := Tab[indCpt];
                Tab[indCpt] := Tab[indMin];
                Tab[indMin] := temp;
            end;
          writeln;  
           writeln('Tableau tri‚ :'); 
        for i := 1 to n do
            begin
            	write('[',Tab[i],']');
            end;  
end.