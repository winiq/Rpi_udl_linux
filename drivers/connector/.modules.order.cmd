cmd_drivers/connector/modules.order := {   echo drivers/connector/cn.ko; :; } | awk '!x[$$0]++' - > drivers/connector/modules.order
