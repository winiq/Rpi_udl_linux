cmd_net/appletalk/modules.order := {   echo net/appletalk/appletalk.ko; :; } | awk '!x[$$0]++' - > net/appletalk/modules.order
