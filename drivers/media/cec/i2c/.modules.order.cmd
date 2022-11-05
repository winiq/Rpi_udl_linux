cmd_drivers/media/cec/i2c/modules.order := {   echo drivers/media/cec/i2c/ch7322.ko; :; } | awk '!x[$$0]++' - > drivers/media/cec/i2c/modules.order
