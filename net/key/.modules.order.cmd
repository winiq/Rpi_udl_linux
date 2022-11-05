cmd_net/key/modules.order := {   echo net/key/af_key.ko; :; } | awk '!x[$$0]++' - > net/key/modules.order
