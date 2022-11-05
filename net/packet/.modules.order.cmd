cmd_net/packet/modules.order := {   echo net/packet/af_packet_diag.ko; :; } | awk '!x[$$0]++' - > net/packet/modules.order
