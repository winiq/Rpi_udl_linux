cmd_drivers/mfd/modules.order := {   echo drivers/mfd/arizona.ko;   echo drivers/mfd/arizona-i2c.ko;   echo drivers/mfd/arizona-spi.ko;   echo drivers/mfd/wl1273-core.ko;   echo drivers/mfd/rpisense-core.ko;   echo drivers/mfd/simple-mfd-i2c.ko; :; } | awk '!x[$$0]++' - > drivers/mfd/modules.order