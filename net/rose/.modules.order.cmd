cmd_net/rose/modules.order := {   echo net/rose/rose.ko; :; } | awk '!x[$$0]++' - > net/rose/modules.order
