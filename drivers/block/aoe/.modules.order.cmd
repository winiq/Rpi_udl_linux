cmd_drivers/block/aoe/modules.order := {   echo drivers/block/aoe/aoe.ko; :; } | awk '!x[$$0]++' - > drivers/block/aoe/modules.order
