18. Transformar gr�ficamente el siguiente bosque en un �rbol binario:

```
      A            B                  L
                  / \                / \
                 C   D              M   N
                    /|\                /
                   // \\              O
                  / | | \
                  E F G H
                   /|\
                  I J K
```                  
                  
UNO HERMANOS y raices
```
                  
      A============B==================L
                  / \                / \
                 C===D              M===N
                    /|\                /
                   // \\              O
                  / | | \
                  E=F=G=H
                   /|\
                  I=J=K
				  
```
                  
ELIMINO PUNTEROS DE TODOS LOS HIJOS EXCEPTO AL PRIMER HIJO                  

```

      A============B==================L
                  /                  /
                 C===D              M===N
                    /                  /
                   /                  O
                  / 
                  E=F=G=H
                   /
                  I=J=K
```                  
ACOMODO (graficamente) EL ARBOL 

```               
                   A
                  /
                 B
                / \
               /   \
              /     \
             C       L
              \     /
               D   M
              /     \
             E       N
              \     /
               F   O
              / \
             I   G
              \   \
               J   H                   
                \
                 K
                 
                 
```

