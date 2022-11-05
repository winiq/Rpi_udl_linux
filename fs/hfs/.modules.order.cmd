cmd_fs/hfs/modules.order := {   echo fs/hfs/hfs.ko; :; } | awk '!x[$$0]++' - > fs/hfs/modules.order
