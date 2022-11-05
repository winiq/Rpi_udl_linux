cmd_drivers/w1/modules.order := {   cat drivers/w1/masters/modules.order;   cat drivers/w1/slaves/modules.order;   echo drivers/w1/wire.ko; :; } | awk '!x[$$0]++' - > drivers/w1/modules.order
