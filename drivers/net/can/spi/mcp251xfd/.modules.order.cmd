cmd_drivers/net/can/spi/mcp251xfd/modules.order := {   echo drivers/net/can/spi/mcp251xfd/mcp251xfd.ko; :; } | awk '!x[$$0]++' - > drivers/net/can/spi/mcp251xfd/modules.order
