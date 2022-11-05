cmd_net/bridge/modules.order := {   cat net/bridge/netfilter/modules.order;   echo net/bridge/bridge.ko;   echo net/bridge/br_netfilter.ko; :; } | awk '!x[$$0]++' - > net/bridge/modules.order
