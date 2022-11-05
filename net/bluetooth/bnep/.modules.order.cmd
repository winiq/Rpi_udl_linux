cmd_net/bluetooth/bnep/modules.order := {   echo net/bluetooth/bnep/bnep.ko; :; } | awk '!x[$$0]++' - > net/bluetooth/bnep/modules.order
