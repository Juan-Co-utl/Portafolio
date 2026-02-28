
package utl.levn304.proyecto17;

import controlador.CtrAdministrador;
import modelo.Administrador;
import modelo.ConsultasAdministrador;
import vista.frmAdministrador;
import vista.frmLibros;
import vista.frmPrestamo;
import vista.frmUsuarios;

public class Proyecto17 {
    
    public static void main(String[] args) {
    frmAdministrador vista = new frmAdministrador();
    frmLibros vista2 = new frmLibros();
    frmUsuarios vista3 = new frmUsuarios();
    frmPrestamo vista4 = new frmPrestamo();
    Administrador administrador = new Administrador();
    ConsultasAdministrador consulta = new ConsultasAdministrador();
    CtrAdministrador controlador =  new CtrAdministrador(administrador,consulta,vista,vista2,vista3,vista4);
    
    controlador.iniciar();
    vista.setVisible(true);

    }
    
}
