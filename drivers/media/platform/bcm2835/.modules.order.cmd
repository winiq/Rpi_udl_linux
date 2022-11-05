cmd_drivers/media/platform/bcm2835/modules.order := {   echo drivers/media/platform/bcm2835/bcm2835-unicam.ko; :; } | awk '!x[$$0]++' - > drivers/media/platform/bcm2835/modules.order
