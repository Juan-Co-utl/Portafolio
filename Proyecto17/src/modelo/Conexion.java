
package modelo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;


public class Conexion {
    
    private final String BASE = "biblioteca";
    private final String USER = "root";
    private final String PASSWORD = "root";
    private final String URL = "jdbc:mysql://localhost:3306/" + BASE;
    private Connection con;
    
    public Connection getConexion()
    {
        try{
            this.con = DriverManager.getConnection(this.URL, this.USER, this.PASSWORD);   
        }catch(SQLException e){
            System.err.println(e);
        }
        return this.con;
    }
    
}