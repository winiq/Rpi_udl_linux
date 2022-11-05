cmd_fs/xfs/modules.order := {   echo fs/xfs/xfs.ko; :; } | awk '!x[$$0]++' - > fs/xfs/modules.order
