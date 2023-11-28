#include "Produit.h"


int main(){
    Produit p1(120,"verre V225" );
    Produit p2(125,"verre V220" );
    Produit p3;
    
    p3=p1+p2;
    cout<<p1 ;
    cout<<p2 ;
    cout<<p3 ;

    return 0;


}