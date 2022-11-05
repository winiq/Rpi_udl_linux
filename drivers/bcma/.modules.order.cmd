cmd_drivers/bcma/modules.order := {   echo drivers/bcma/bcma.ko; :; } | awk '!x[$$0]++' - > drivers/bcma/modules.order
