# Philosophers_42
Proyecto de la Escuela 42 basada en procesos y subprocesos: Hilos y Mutex

Uno o más filósofos se sientan en una mesa redonda. En el centro de la mesa se encuentra un gran bol de espaguetis.
 
  • Los filósofos solo pueden comer, pensar, o dormir.
Mientras están comiendo, no pueden pensar ni dormir;
Mientras están pensando, no pueden dormir ni comer;
Y, por supuesto, mientras están durmiendo, no pueden comer ni pensar.

  • También hay tenedores en la mesa, tantos tenedores como filósofos.
  • Porque coger y comer espaguetis con un solo tenedor puede ser incomodo, los filósofos deben tomar el tenedor de la derecha y el de la izquierda, uno en cada mano.
  • Cuándo un filósofo termine de comer, dejará los tenedores en la mesa e inmediatamente empezará a dormir. Una vez se despierte, empezará a pensar nuevamente.

La simulación se detendrá cuando un filósofo muere por inanición.
  • Todos los filósofos necesitan comer y nunca deben morir de hambre.
  • Los filósofos no hablan entre ellos.
  • Los filósofos no saben si otro filósofo va a morir.
  • ¡No debería hacer falta decir que todos deben evitar morir!




    /* INTRODUCCION A PROYECTO PHILOSOPHERS_42 
Nuestro programa tomará los siguientes argumentos:

number_of_philosophers --> Nº de filósofos en mesa.
time_to_die --> Tiempo en ms que un filósofo tiene antes de morir después de una comida.
time_to_eat --> Tiempo en ms que tarda un filósofo en comer. Durante ese tiempo, el filósofo mantiene sus dos tenedores en la mano.
time_to_sleep --> Tiempo en ms que un filósofo pasa durmiendo.
number_of_times_each_philosopher_must_eat --> Veces que come, antes de finalizar
    Si no se especifica, la simulación continúa a menos que muera un filósofo */



    /*  CREAR UN HILO

int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg)

    pthread_t *thread --> Puntero hacia hilo.
    const pthread_attr_t *attr --> permite cambiar los atributos predeterminados del nuevo hilo --> (NULL)
    void *(*start_routine) (void *) --> función que ejecuta el hilo.
    void *arg --> Argumento adicional

RETORNO:
Cuando finaliza la función  pthread_create, la variable de subproceso que le proporcionamos debe contener el ID del subproceso recién creado. 
La función en sí devuelve 0 si la creación fue exitosa u otro valor si ocurrió un error */



    /*  UNIR UN HILO
Para bloquear la ejecución de un hilo hasta que termine otro hilo, podemos usaR

int pthread_join(pthread_t thread, void **retval);

    pthread_t thread --> el ID del hilo que este hilo debe esperar. El subproceso especificado debe poder unirse
    void **retval --> copia el 'exit status' del hilo, NULL por defecto.

RETORNO:
La función pthread_join devuelve 0 para el éxito u otro número que represente un código de error.*/



    /*SEPARAR UN HILO
Desconectar el hilo para decirle al sistema operativo que puede reclamar sus recursos de inmediato cuando termine su ejecución

int pthread_detach(pthread_t thread);

    pthread_t thread --> el ID del hilo 

RETORNO:
    Obtenemos 0 a cambio si la operación fue un éxito, o distinto de cero si hubo un error.*/

