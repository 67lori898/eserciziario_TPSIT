#include <stdio.h>
#include <string.h>
/*ESERCIZIO 3: */
int main(){
    char myString [100];  //Impongo che la lunghezza della stringa sia di massimo 100 caratteri. 
    char myChr;  //Carattere che si vuole sostituire con X. 
    int choice=0; 
    int pos=0; 
    printf("\nInserisci la stringa: "); 
    scanf("%s",myString); 
    char newString[strlen(myString)]; 
 
    printf("\nDigita la scelta: "); 
    printf("\n1]Inserire un carattere nella posizione che desideri."); 
    printf("\n2]Sostituire un carattere all'interno della stringa con: 'X'."); 
    scanf("%d",&choice); 
    

    switch(choice){

      case 1: 
         
          printf("\nInserisci il carattere che vuoi aggiungere: "); 
          scanf(" %c",&myChr); 
         
          //Chiedo all'utente di inserire nuovamente la stringa SE NON È COMPRESA NEL RANGE. 
         do{
          printf("Inserisci la posizione in cui vuoi aggiungere il carattere: "); 
          scanf(" %d",&pos); 
         }while(pos<0||pos>strlen(myString)); 
         /*for(int i=0; i<=strlen(myString);i++){
             for(int j=0; j<=strlen(myString);j++){
                 newString[i]=myString[j];       
                     if(i==pos){
                     
                            newString[i]=myChr;       
                            j=j-1; 
                     
                     }
                 
             }
                 
         }
          printf("La nuova stringa è: %s ",newString);*/
         for(int i=0; i<=strlen(myString);i++){
                 newString[i]=myString[i];       
                     if(i==pos){
                     
                            newString[i]=myChr;       
                            myString[i-1]; //Torno indietro di una posizione 
                         }
         }            
          printf("La nuova stringa è: %s ",newString);    
        break; 
       case 2: 
          int sameChar=0; 
          printf("\nInserisci il carattere che desidera  rimuovere: "); 
          scanf(" %c",&myChr); 
           //Chiedo all'utente di inserire nuovamente la stringa SE NON È COMPRESA NEL RANGE. 
         /*do{
          printf("Inserisci la posizione in cui vuoi rimuovere il carattere"); 
          scanf("%d",&pos); 
         }while(pos<0||pos>strlen(myString))*/
         
         for(int i=0; i<=strlen(myString); i++){
                if(myString[i]==myChr){
                   myString[i]='X'; //Sostituiamo il carattere
                   sameChar++; 
               }
             }
         if(sameChar==0){
             printf("Non è stato possibile trovare un carattere corrispondente alla tua scelta."); 
            }
        else{
            printf("La nuova stringa è: %s ",myString);                 
            }
         
        break; 

        
         default: 
         printf("Scelta non valida! "); 
         break; 
     }
}
