cmd_net/batman-adv/modules.order := {   echo net/batman-adv/batman-adv.ko; :; } | awk '!x[$$0]++' - > net/batman-adv/modules.order
