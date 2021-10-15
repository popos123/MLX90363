This is the Arduino library for the MLX90363 magnetometer rotery sensor, is using in the Logitech G29 steering wheel.
I was modified the repository:
https://gist.github.com/Otteri/86da94b676e55acff900af58b90d25fc

I was added just:
- Support for Software SPI
- STM32
- Arduino IDE

There is a 2 versions:
- slow version with delay in the library: about 0.5kHz read rate (folder **with_delay**)
- fast version with timers in the library: about 1.1kHz read rate (folder **without_delay**)

*in version **without_delay** it is not recommended to use the **delay()** function in main **loop()** and is designed for fast programs where the main **loop()** function executes in a shorter time (maximum 30ms), for longer programs e.g. with screen handling the slow version is recommended.

I was used this library for the my new project:
https://github.com/popos123/Logitech-G29-Motherboard-Replacement
