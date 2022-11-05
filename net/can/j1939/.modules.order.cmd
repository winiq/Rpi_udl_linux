cmd_net/can/j1939/modules.order := {   echo net/can/j1939/can-j1939.ko; :; } | awk '!x[$$0]++' - > net/can/j1939/modules.order
