
package controlador;
import javax.swing.JOptionPane;
import modelo.ConsultasAdministrador;
import modelo.Administrador;
import vista.frmAdministrador;

import javax.swing.JOptionPane;
import vista.frmAdministrador;
import vista.frmLibros;
import vista.frmPrestamo;
import vista.frmUsuarios;

public class CtrAdministrador {
    private Administrador administrador;
    private ConsultasAdministrador consulta;
    private frmAdministrador vista;
    private frmLibros vista2;
    private frmUsuarios vista3;
    private frmPrestamo vista4;
    

    

    public CtrAdministrador(Administrador administrador, ConsultasAdministrador consulta, frmAdministrador vista, frmLibros vista2, frmUsuarios vista3, frmPrestamo vista4) {
        this.administrador = administrador;
        this.consulta = consulta;
        this.vista = vista;
        this.vista2 = vista2;
        this.vista3 = vista3;
        this.vista4 = vista4;
        
        this.vista.getBtnGuardar().addActionListener(e->proceso());
        this.vista2.getBtnGuardar().addActionListener(e->proceso2());
        this.vista3.getBtnGuardar().addActionListener(e->proceso3());
         this.vista4.getBtnGuardar().addActionListener(e->guardar());
    }
         public void proceso(){
        vista.setVisible(false);
         vista2.setVisible(true);
         vista.setLocationRelativeTo(null);

     }
                  public void proceso2(){
        vista2.setVisible(false);
         vista3.setVisible(true);
         vista.setLocationRelativeTo(null);

     }
                           public void proceso3(){
        vista3.setVisible(false);
         vista4.setVisible(true);
         vista.setLocationRelativeTo(null);
     }
     
    
    public void iniciar(){
    vista.setTitle("Iniciar sesión");
    vista.setLocationRelativeTo(null);
    }
    
    public void guardar(){
    this.administrador.setNombre(this.vista.getTxtNombre().getText());
    this.administrador.setContrasena(this.vista.getTxtContrasena().getText());
    this.administrador.setIsbn(this.vista2.getTxtIsbn().getText());
    this.administrador.setTitulo(this.vista2.getTxtTitulo().getText());
    this.administrador.setAutor(this.vista2.getTxtAutor().getText());
    this.administrador.setEditorial(this.vista2.getTxtEditorial().getText());
    this.administrador.setStock(Integer.parseInt(this.vista2.getTxtStock().getText()));
    this.administrador.setNombre2(this.vista3.getTxtNombre().getText());
    this.administrador.setDireccion(this.vista3.getTxtDireccion().getText());
    this.administrador.setTelefono(this.vista3.getTxtTelefono().getText());
    this.administrador.setCantidad(Integer.parseInt(this.vista4.getTxtCantidad().getText()));
    
    
    
    if(this.consulta.registrar(administrador)){
    JOptionPane.showMessageDialog(null,"Registro Guardado");
    }else{
    
    JOptionPane.showMessageDialog(null,"Error al guardar");
    }
    
    
  }
    
   
}