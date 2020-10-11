# Ejercicos de Arduino

## Practica 1 básicos:

[x] Realizar el montaje necesario (usando LED, resistencia y placa de prototipado) para lanzar el programa básico de ejemplo “Blink” de parpadeo de un LED.

[ ] Secuencia de leds. Se trata de encender y apagar 4 leds secuencialmente. Los leds deben estar conectados a los pines 5, 6, 7 y 8. Se deben encender y posteriormente apagar los leds desde el pin 5 al 8, con un tiempo de duración de encendido y apagado de 200 milisegundos. Nota: la secuencia principal del programa debe estar reproducida en una función a la que llamará el programa principal

[ ] Cruce de semáforos. Se trata de un cruce de semáforos controlado por arduino, para ello utilizaremos en el primer semáforo los pines 3 (led rojo), 4 (led ambar), 5 (led verde), en el segundo semáforo utilizaremos  los pines 6 (led rojo), 7 (led ambar) y 8 (led verde). La secuencia de funcionamiento debe ser : rojo 1 – verde 2 durante 3 segundos, rojo 1 – ambar 2 durante 500 ms, verde 1 – rojo 2 durante 3 segundos, ambar 1 - , rojo 2 durante 500 ms.

[ ] SOS con zumbador. Se trata de un zumbador que en código morse (pitidos largos/cortos) especifica una palabra, en nuestro caso SOS. Para el que no lo sepa, la S son tres señales acústicas de corta duración y la O tres señales acústica de larga duración. El zumbador debe estar conectado al pin 13, los pitidos cortos tendrán una duración de 100 ms y los largos 300 ms. Entre letra y letra debe pasar un tiempo de 300 ms y entre SOSs debe haber un tiempo de 1000 ms. Nota: Debes usar variables para guardar los tiempos que vas a usar.

[ ] Secuencia de leds con pulsador. Se trata de encender y apagar 4 leds secuencialmente al accionar un pulsador. El pulsador debe estar conectado al pin 4, y los leds a los pines 5,6,7 y 8. Se deben encender y posteriormente apagar los leds desde el pin 5 al 8, con un tiempo de duración de encendido y apagado de 200 milisegundos. Nota: la secuencia principal del programa debe estar reproducida en una función a la que llamará el programa principal.

[ ] Termostato. Se trata de un dispositivo que haga funcionar un motor y un led cuando
la temperatura supera cierto umbral. Para ello conectaremos una ntc (sensor térmico)
a la entrada analógica 0, un led al pin 5 y un motor de corriente continua al pin 10.
Cuando la temperatura llegue a cierto umbral de voltaje (entre 0 y 1024) que nosotros
decidamos, se conectarán a la vez el diodo led y el motor que puede tener unas aspas
de ventilador en su eje para enfriar la ntc. Además se deberá visionar el valor de
voltaje en la entrada analógica (valor entre 0 y 1024) en una consola en el PC