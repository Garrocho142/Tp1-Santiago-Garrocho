# Librería GPIO

Librería para la manipulación de pines

Implemente las siguientes funciones respetando el formato indicado:

```c    
void GPIO_InitPin(gpio_port_e port, gpio_pin_e pin, gpio_mode_e mode); 

void GPIO_WritePin(gpio_port_e port, gpio_pin_e pin, bool value); 

void GPIO_TogglePin(gpio_port_e port, gpio_pin_e pin);

bool GPIO_ReadPin(gpio_port_e port, gpio_pin_e pin);

inline void GPIO_WritePort(gpio_port_e port, uint8_t value); 

inline uint8_t GPIO_ReadPort(gpio_port_e port);
```