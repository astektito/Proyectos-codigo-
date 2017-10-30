/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package puntopoo;

/**
 *
 * @author Labs-DECC
 */
public class PuntoPOO {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Punto p1=new Punto(5,-7);
        Punto p2=new Punto(5,0);
       Operaciones mosca1=new Operaciones();
       mosca1.calcularD(p1);
       mosca1.mostrarR();
       mosca1.calcularD(p2);
       mosca1.mostrarR();
    
    }
}