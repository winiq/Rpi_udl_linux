cmd_drivers/staging/rtl8712/modules.order := {   echo drivers/staging/rtl8712/r8712u.ko; :; } | awk '!x[$$0]++' - > drivers/staging/rtl8712/modules.order
