const app = Vue.createApp({

    data(){

        return{
         Mostrar: true,
         mensaje:'Ocultar',
         lengTemp: '',
        lengsKnown: [],
        anios: 0,
        numLengs: 0,
            
        }
    },
    methods:{
        MostrarPregunta: function(){
         this.mostrar == ! this.mostrar
         if(this.Mostrar)
            this.mensaje = 'Ocultar';
        else
            this.mensaje= 'Mostrar';
        },
        agregarLenguaje: function(){
            if(this.lengTemp != ''){
                this.lengsKnown.push(this.lengTemp);
                this.lengTemp = '';
            }
        }
    }
    
});
const app1 = app.mount('#componente')
