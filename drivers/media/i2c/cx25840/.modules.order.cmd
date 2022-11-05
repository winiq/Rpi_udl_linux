cmd_drivers/media/i2c/cx25840/modules.order := {   echo drivers/media/i2c/cx25840/cx25840.ko; :; } | awk '!x[$$0]++' - > drivers/media/i2c/cx25840/modules.order
