cmd_drivers/pps/clients/modules.order := {   echo drivers/pps/clients/pps-ldisc.ko;   echo drivers/pps/clients/pps-gpio.ko; :; } | awk '!x[$$0]++' - > drivers/pps/clients/modules.order
