cmd_net/bluetooth/rfcomm/modules.order := {   echo net/bluetooth/rfcomm/rfcomm.ko; :; } | awk '!x[$$0]++' - > net/bluetooth/rfcomm/modules.order
