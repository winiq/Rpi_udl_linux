cmd_drivers/net/wireless/zydas/zd1211rw/modules.order := {   echo drivers/net/wireless/zydas/zd1211rw/zd1211rw.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/zydas/zd1211rw/modules.order
