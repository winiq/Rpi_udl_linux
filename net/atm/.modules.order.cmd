cmd_net/atm/modules.order := {   echo net/atm/atm.ko;   echo net/atm/pppoatm.ko; :; } | awk '!x[$$0]++' - > net/atm/modules.order
