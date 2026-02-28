const inst = Vue.createApp({
    data(){
        return{
           minimo:5,
           juegos:[{
            titulo: 'Assassins creed',
            descripcion:'Una hermandad de asesinos se enfrentan a los templarios por la libertad',
            puntaje:10},
            {titulo: 'Yakuza 0',
            descripcion: 'Kiryu debelimpiar su nombre de un asesinato mientras Majima intenta volver al mundo criminal',
            puntaje:8,},
            {titulo:'Postal 2',
            descripcion:'Vive una semana como el Postal dude haciendo sus recados de la manera más normal o VIOLENTA posible',
            puntaje:4,},
           ],

        }
    },
    methods:{
        
    },
    computed:{
       mejorPuntuacion(){
        return this.juegos.filter(juego => juego.puntaje >= this.minimo);
       } 
    }
});

const app = inst.mount('#clases');