package puntopoo;

/**
 * Representa un punto en el plano cartesiano con coordenadas (x, y).
 *
 * @author Edwin Astudillo
 */
public class Punto {
    private float x, y;

    public Punto(float x, float y) {
        this.x = x;
        this.y = y;
    }

    public void moverX(float valor) {
        x = x + valor;
    }

    public void moverY(float valor) {
        y = y + valor;
    }

    public void mostrarCoordenada() {
        System.out.println("el punto es (" + x + "," + y + ")");
    }

    public float getX() {
        return x;
    }

    public float getY() {
        return y;
    }

    public void setX(float valor) {
        x = valor;
    }

    public void setY(float valor) {
        y = valor;
    }
}
