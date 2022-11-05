cmd_drivers/tty/serial/modules.order := {   cat drivers/tty/serial/8250/modules.order;   echo drivers/tty/serial/sc16is7xx.ko; :; } | awk '!x[$$0]++' - > drivers/tty/serial/modules.order
