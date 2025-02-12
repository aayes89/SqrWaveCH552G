#include <ch554.h> 
void main() {
    // Configurar P3.4 como salida
    P3_MOD_OC &= ~(1 << 4);  // Open-Drain OFF (Modo push-pull)
    P3_DIR_PU |= (1 << 4);   // Configurar como salida

    while (1) {
        P3 |= (1 << 4);  // Encender
        _delay_us(4);    // Pequeño delay (~125kHz)
        P3 &= ~(1 << 4); // Apagar
        _delay_us(4);
    }
}
