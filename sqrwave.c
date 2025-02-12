#include <ch554.h> 

void main() {
    // Configurar el pin P3.4 como salida
    P3_MOD_OC &= ~(1 << 4);
    P3_DIR_PU |= (1 << 4);

    while (1) {
        P3 |= (1 << 4);  // ON
        _nop_(); _nop_(); _nop_(); // Ajuste de timing
        P3 &= ~(1 << 4); // OFF
        _nop_(); _nop_(); _nop_();
    }
}
