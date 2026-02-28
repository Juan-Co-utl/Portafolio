const app = Vue.createApp({ 
    data(){
        return{
            texto:'',
            estado: true,
            cambio: 'Ocultar',
            validacion: 'Escribe tu nombre',
            nombre: '',
            apellido: '',
            apellidos: [],
            
            gustaProgramar: '',
            anios: 0,
            numLenguajes: 0,
            lenguajeTemporal: '',
            lenguajesConocidos: []
        }
    },
    methods:{
        cambiar: function(){
            this.estado = !this.estado
            if(this.estado)
                this.cambio = 'Ocultar';
            else
                this.cambio = 'Mostrar';
        },
        validar: function(){
            if(this.nombre.length == 0)
                this.validacion = 'Escribe un nombre mayor a 3 letras';
            else if(this.nombre.length > 0 && this.nombre.length < 4)
                this.validacion = 'Nombre Invalido';
            else 
                this.validacion = 'Nombre Valido';
        },
        agregar: function(){
            if(this.apellido != ''){
                this.apellidos.push(this.apellido);
                this.apellido = ''; 
            }
        },
        agregarLenguaje: function(){
            if(this.lenguajeTemporal != ''){
                this.lenguajesConocidos.push(this.lenguajeTemporal);
                this.lenguajeTemporal = '';
            }
        }
    }
});
const app1 = app.mount('#componente')