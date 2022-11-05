cmd_drivers/mux/modules.order := {   echo drivers/mux/mux-core.ko;   echo drivers/mux/mux-gpio.ko; :; } | awk '!x[$$0]++' - > drivers/mux/modules.order
