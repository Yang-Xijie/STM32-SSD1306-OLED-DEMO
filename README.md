# Keil Project Demo of SSD1306 OLED on STM32F407ZGT6

This project is generated by CubeMX, with HAL `GPIO` and `IIC` selected.

- `GPIO`: `PF9` and `PF10` are connected to two leds. Function `LedBlink()` makes these two leds blink once per second.
- `IIC`: `PB6` and `PB7` are connect to `SCL` and `SDA` of an SSD1306 OLED. To check how to draw things on the screen, check [Yang-Xijie/STM32-SSD1306](https://github.com/Yang-Xijie/STM32-SSD1306).

With Keil installed, you can double click `project.uvprojx` to open this demo.
