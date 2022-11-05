cmd_net/ipv6/ila/modules.order := {   echo net/ipv6/ila/ila.ko; :; } | awk '!x[$$0]++' - > net/ipv6/ila/modules.order
