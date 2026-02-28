const app = Vue.createApp({
    data() {
        return {
            nombre: '',
            lista: [],
            telefono: '',
            error: false,
            contactoRegistrado: false,
            categoria: '',
            llamadas: 0,
            mensajes: 0,
        }
    },
    methods: {
        agregar() {
            if (this.nombre != '' && this.telefono != '' && this.categoria != '') {
                this.lista.push({
                    nombre: this.nombre,
                    telefono: this.telefono,
                    categoria: this.categoria,
                    llamadas: 0,
                    mensajes: 0
                });
                this.nombre = '';
                this.telefono = '';
                this.categoria = '';

                
            }
        },
          sumarLlamada(index) {
            this.lista[index].llamadas++;
        },
        restarLlamada(index){
            this.lista[index].llamadas--;
        },

        sumarMensaje(index) {
            this.lista[index].mensajes++;
        },
        restarMensaje(index){
            this.lista[index].mensajes--;
        },
    },
    computed: {
        formularioCompleto() {
            return this.nombre !== '' && this.telefono !== '' && this.categoria !== '';
        },
        totalContactos() {
            return this.lista.length;
        },
        totalLlamadas() {
            return this.lista.reduce((total, c) => total + c.llamadas, 0);
        },
        totalMensajes() {
            return this.lista.reduce((total, c) => total + c.mensajes, 0);
        }
    }
});
const app1 = app.mount('#componente')