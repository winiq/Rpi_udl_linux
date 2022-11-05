cmd_net/9p/modules.order := {   echo net/9p/9pnet.ko; :; } | awk '!x[$$0]++' - > net/9p/modules.order
