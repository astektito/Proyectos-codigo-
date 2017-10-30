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
public class Punto {
    private float x,y;
    public Punto(float x1,float y){
        x=x1;
        this.y=y;
    }
    public void moverX(float valor){
        x=x+valor;
    }
    public void moverY(float valor){
        y=y+valor;
    }
    public void mostrarCoordenada(){
        System.out.println("el punto es ("+x+","+y+")");
    }
    public float getX(){
        return x;
    }
    public float getY(){
        return y;
    }
    public void setX(float valor){
        x=valor;
    }
    public void setY(float valor){
        y=valor;
    }
}
