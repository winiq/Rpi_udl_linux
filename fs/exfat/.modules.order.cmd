cmd_fs/exfat/modules.order := {   echo fs/exfat/exfat.ko; :; } | awk '!x[$$0]++' - > fs/exfat/modules.order
