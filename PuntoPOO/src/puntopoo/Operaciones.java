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
public class Operaciones {
    float distancia;
    Punto punto;
    public Operaciones(){
        punto=new Punto(0,0);
        distancia=0;
    }
    public void calcularD(Punto p){
       float dis = (float) Math.sqrt(Math.pow(p.getX()-punto.getX(),2)+Math.pow(p.getY()-punto.getY(),2));
        punto.setX(p.getX());
         punto.setY(p.getY());
         distancia=distancia+dis;
    }
    public void mostrarR(){
        System.out.println("RECORRIDO"+distancia);
    }
}
