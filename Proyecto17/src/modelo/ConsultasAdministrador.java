
package modelo;

import java.sql.Connection;
import java.sql.*;
import java.sql.SQLException;

public class ConsultasAdministrador extends Conexion {
  public boolean registrar(Administrador administrador) {
    Connection con = getConexion();
    
    String sqlAdmin = "INSERT INTO administrador(contrasena, nombre) VALUES(?,?)";
    String sqlLibros = "INSERT INTO libros(isbn,titulo,autor,editorial,stock) VALUES(?,?,?,?,?)";
    String sqlUsuarios = "INSERT INTO usuarios(nombre,direccion,telefono) VALUES(?,?,?)";
    String sqlPrestamo = "INSERT INTO prestamo(idUsuario,isbn,cantidad) VALUES(?,?,?)";
    
    try {
     
        PreparedStatement psAdmin = con.prepareStatement(sqlAdmin);
        psAdmin.setString(1, administrador.getContrasena());
        psAdmin.setString(2, administrador.getNombre());
        psAdmin.execute(); 
       
        PreparedStatement psLibros = con.prepareStatement(sqlLibros);
        psLibros.setString(1, administrador.getIsbn());
        psLibros.setString(2, administrador.getTitulo());
        psLibros.setString(3, administrador.getAutor());
        psLibros.setString(4, administrador.getEditorial());
        psLibros.setInt(5, administrador.getStock());
        psLibros.execute(); 
         
        PreparedStatement psUsuarios = con.prepareStatement(sqlUsuarios, Statement.RETURN_GENERATED_KEYS);
        psUsuarios.setString(1, administrador.getNombre2());
        psUsuarios.setString(2, administrador.getDireccion());
        psUsuarios.setString(3, administrador.getTelefono());
        psUsuarios.execute();
       
        ResultSet generatedKeys = psUsuarios.getGeneratedKeys();
        int idUsuarioGenerado = 0;
        if (generatedKeys.next()) {
            idUsuarioGenerado = generatedKeys.getInt(1);
        }
        
   
        PreparedStatement psPrestamo = con.prepareStatement(sqlPrestamo);
        psPrestamo.setInt(1, idUsuarioGenerado);
        psPrestamo.setString(2, administrador.getIsbn()); 
        psPrestamo.setInt(3, administrador.getCantidad());
        psPrestamo.execute(); 
        
        return true;
          }catch(SQLException e){
         System.err.println(e);
         return false;
     }finally{
         try{
             con.close();
         }catch(SQLException e){
             System.err.println(e);
         }
     }
    }
}