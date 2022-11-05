cmd_net/nfc/modules.order := {   echo net/nfc/nfc.ko; :; } | awk '!x[$$0]++' - > net/nfc/modules.order
