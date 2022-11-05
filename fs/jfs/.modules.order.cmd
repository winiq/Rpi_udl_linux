cmd_fs/jfs/modules.order := {   echo fs/jfs/jfs.ko; :; } | awk '!x[$$0]++' - > fs/jfs/modules.order
