cmd_net/netlink/modules.order := {   echo net/netlink/netlink_diag.ko; :; } | awk '!x[$$0]++' - > net/netlink/modules.order
