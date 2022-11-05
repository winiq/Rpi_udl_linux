cmd_net/core/modules.order := {   echo net/core/pktgen.ko; :; } | awk '!x[$$0]++' - > net/core/modules.order
