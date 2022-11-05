cmd_net/ax25/modules.order := {   echo net/ax25/ax25.ko; :; } | awk '!x[$$0]++' - > net/ax25/modules.order
