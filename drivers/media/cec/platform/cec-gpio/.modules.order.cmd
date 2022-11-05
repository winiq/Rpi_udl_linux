cmd_drivers/media/cec/platform/cec-gpio/modules.order := {   echo drivers/media/cec/platform/cec-gpio/cec-gpio.ko; :; } | awk '!x[$$0]++' - > drivers/media/cec/platform/cec-gpio/modules.order
