cmd_net/netrom/modules.order := {   echo net/netrom/netrom.ko; :; } | awk '!x[$$0]++' - > net/netrom/modules.order
