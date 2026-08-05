package puntopoo;

/**
 * Clase principal: crea puntos y calcula el recorrido acumulado entre ellos.
 *
 * @author Edwin Astudillo
 */
public class PuntoPOO {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Punto p1 = new Punto(5, -7);
        Punto p2 = new Punto(5, 0);
        Operaciones recorrido = new Operaciones();
        recorrido.calcularD(p1);
        recorrido.mostrarR();
        recorrido.calcularD(p2);
        recorrido.mostrarR();
    }
}
