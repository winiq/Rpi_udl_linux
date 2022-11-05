cmd_drivers/staging/r8188eu/modules.order := {   echo drivers/staging/r8188eu/r8188eu.ko; :; } | awk '!x[$$0]++' - > drivers/staging/r8188eu/modules.order
