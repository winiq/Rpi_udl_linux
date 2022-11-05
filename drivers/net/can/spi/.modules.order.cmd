cmd_drivers/net/can/spi/modules.order := {   cat drivers/net/can/spi/mcp251xfd/modules.order;   echo drivers/net/can/spi/mcp251x.ko; :; } | awk '!x[$$0]++' - > drivers/net/can/spi/modules.order
