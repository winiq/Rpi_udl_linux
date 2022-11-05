cmd_drivers/net/ipvlan/modules.order := {   echo drivers/net/ipvlan/ipvlan.ko; :; } | awk '!x[$$0]++' - > drivers/net/ipvlan/modules.order
