cmd_drivers/staging/vt6656/modules.order := {   echo drivers/staging/vt6656/vt6656_stage.ko; :; } | awk '!x[$$0]++' - > drivers/staging/vt6656/modules.order
