Table of Contents
=================

  * [Table of Contents](#table-of-contents)
  * [wb-homa-drivers](#wb-homa-drivers)
  * [wb-homa-adc](wb-homa-adc/README.md)
  * [wb-homa-modbus](wb-homa-modbus/README.md)
    * [Устройства Uniel](wb-homa-modbus/README.md#%D0%A3%D1%81%D1%82%D1%80%D0%BE%D0%B9%D1%81%D1%82%D0%B2%D0%B0-uniel)
    * [Таблица шаблонов device_type](wb-homa-modbus/README.md#%D0%A2%D0%B0%D0%B1%D0%BB%D0%B8%D1%86%D0%B0-%D1%88%D0%B0%D0%B1%D0%BB%D0%BE%D0%BD%D0%BE%D0%B2-device_type)
  * [wb-homa-gpio драйвер](wb-homa-gpio/README.md)



wb-homa-drivers
===============
MQTT drivers for compatible with HomA conventions
    * Kernel 1-wire interface driver (currently thermometers only)
    * GPIO-drivern switches driver
    * Ninja Cloud (ninjablocks.com) bridge


Lanuage: C++11, g++-4.7 is required




wb-mqtt-timestamper 
====================

Служба, которая фиксирует время изменения контрола в MQTT,  
запускается скриптом `/etc/init.d/wb-mqtt-timestamper start`. К каждому контролу публикуется время его изменения 
в топик `/devices/+/controls/CONTROL_NAME/meta/ts` в формате Unix. Параметры запуска службы можно изменить в файле 
`/etc/defaults/wb-mqtt-timestamper` или непосредственно в командной строке.
Описания параметров доступны в help(```wb-mqtt-timestamper -h```).
