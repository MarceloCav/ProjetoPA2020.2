#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "sculptor.h"

using namespace std;

int main(){

            Sculptor *v3;
            int a=120, b=120, c=120;

            v3 = new Sculptor(a,b,c);

             v3->setColor(250,250,250,0.5);  //branco da mesa
             v3->putBox(0,90,0,50,0,0);     //parte vertical da mesa

             v3->setColor(0,0,0,0.5);        //preto da carcaça da tela
             v3->putBox(20,70,1,40,1,2);     //carcaça da tela
             v3->setColor(0,0,25,0.5);       //azul da tela
             v3->putBox(25,65,5,35,1,2);     //tela
             v3->setColor(0,0,0,0.5);        //preto da carcaça do teclado
             v3->putBox(20,70,1,2,1,40);     //carcaça do teclado

             //mousepad
             v3->setColor(150,150,150,0.5);    // cinza do mousepad
             v3->putBox(37,53,1,2,30,35);     // mousepad
             v3->putBox(37,44,1,2,37,38);     // mousepad
             v3->putBox(46,53,1,2,37,38);     // mousepad


             v3->setColor(250,250,250,0.5); //branco das teclas
            //teclas de cima
             v3->putBox(26,28,2,2,4,6);
             v3->putBox(30,32,2,2,4,6);
             v3->putBox(34,36,2,2,4,6);
             v3->putBox(38,40,2,2,4,6);
             v3->putBox(42,44,2,2,4,6);
             v3->putBox(46,48,2,2,4,6);
             v3->putBox(50,52,2,2,4,6);
             v3->putBox(54,56,2,2,4,6);
             v3->putBox(58,60,2,2,4,6);
             v3->putBox(62,64,2,2,4,6);

             //teclas de baixo
             int a1 = 28;
             for(int i=0; i<=7;i++){
                 v3->putBox(a1+2,a1+4,2,2,12,13);
                 v3->putBox(a1+2,a1+4,2,2,15,16);
                 v3->putBox(a1+2,a1+4,2,2,18,19);
                 v3->putBox(a1+2,a1+4,2,2,21,22);
                 v3->putBox(a1+2,a1+4,2,2,24,25);
                 v3->putBox(a1+2,a1+4,2,2,27,28);
                 a1+=4;
             }

             //tecla de espaço
             v3->putBox(38,50,2,2,27,28);


             //mouse
             v3->setColor(10,20,30,0.8);        // cor do mouse
             v3->putEllipsoid(80,-2,40,3,1,5);  // dimensões do elipsóide (x, y, z, rx, ry, rz)


             //abajur
             v3->setColor(196,157,40,0.8);        // amarelo do abajur
             v3->putSphere(8,25,10,9);           // abajur
             v3->setColor(196,20,40,0.8);       // vermelho do abajur
             v3->putBox(8,10,1,25,8,12);       //suporte abajur
             v3->setColor(206,212,218,0.8);   // cinza da base do abajur
             v3->putEllipsoid(9,1,10,6,3,3); //base do abajur

             //mesa
              v3->setColor(250,250,250,0.5);  // branco da mesa
              v3->putBox(0,90,0,0,0,50);     // parte horizontal da mesa


            v3->writeOFF("escultura.off");
    return 0;
}
