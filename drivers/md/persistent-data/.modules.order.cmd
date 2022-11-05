cmd_drivers/md/persistent-data/modules.order := {   echo drivers/md/persistent-data/dm-persistent-data.ko; :; } | awk '!x[$$0]++' - > drivers/md/persistent-data/modules.order
