cmd_drivers/ssb/modules.order := {   echo drivers/ssb/ssb.ko; :; } | awk '!x[$$0]++' - > drivers/ssb/modules.order
