cmd_drivers/staging/media/rpivid/modules.order := {   echo drivers/staging/media/rpivid/rpivid-hevc.ko; :; } | awk '!x[$$0]++' - > drivers/staging/media/rpivid/modules.order
