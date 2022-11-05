cmd_drivers/atm/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/atm/modules.order
