package puntopoo;

/**
 * Acumula el recorrido total entre puntos sucesivos calculando la
 * distancia euclidiana desde el ultimo punto visitado.
 *
 * @author Edwin Astudillo
 */
public class Operaciones {
    private float distancia;
    private Punto punto;

    public Operaciones() {
        punto = new Punto(0, 0);
        distancia = 0;
    }

    public void calcularD(Punto p) {
        float distanciaParcial = (float) Math.sqrt(
                Math.pow(p.getX() - punto.getX(), 2)
                + Math.pow(p.getY() - punto.getY(), 2));
        punto.setX(p.getX());
        punto.setY(p.getY());
        distancia = distancia + distanciaParcial;
    }

    public void mostrarR() {
        System.out.println("RECORRIDO" + distancia);
    }
}
