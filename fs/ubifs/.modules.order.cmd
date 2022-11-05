cmd_fs/ubifs/modules.order := {   echo fs/ubifs/ubifs.ko; :; } | awk '!x[$$0]++' - > fs/ubifs/modules.order
