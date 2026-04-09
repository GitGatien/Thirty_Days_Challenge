program ChiffrementCesar;
uses crt;

var
  texte: string;
  cle, i: integer;
  caractere: char;

begin
  clrscr;
  write('Entrez le texte a chiffrer : ');
  readln(texte);
  write('Entrez la cle de decalage (0-25) : ');
  readln(cle);
  //Attention aucun control

  for i := 1 to length(texte) do
  begin
        caractere := texte[i];
        if caractere in ['A'..'Z','a'..'z'] then   //Pour verifier si c' est bien une lettre alphabetique
        begin
            // Chiffrement des majuscules
            if (caractere >= 'A') and (caractere <= 'Z') then
            begin
              caractere := chr(((ord(caractere) - ord('A') + cle) mod 26) + ord('A'));
            end;
            // Chiffrement des minuscules
            if (caractere >= 'a') and (caractere <= 'z') then
            begin
              caractere := chr(((ord(caractere) - ord('a') + cle) mod 26) + ord('a'));
            end;
            texte[i] := caractere;
        end 
        else
         texte[i] := caractere;
  end;
writeln('Texte chiffre : ', texte);
end.
